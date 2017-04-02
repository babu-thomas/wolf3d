#pragma once

#include <string>
#include <GLFW/glfw3.h>
#include <glm/fwd.hpp>

namespace clone { namespace graphics {

#define MAX_KEYS 1024
#define MAX_MOUSE_BUTTONS 32

	class Window
	{
	private:
		std::string m_title;
		int m_width, m_height;
		GLFWwindow *m_window;
		bool m_closed;

		bool m_keys[MAX_KEYS];
		bool m_mouseButtons[MAX_MOUSE_BUTTONS];
		double m_mouseX, m_mouseY;

	public:
		Window(const std::string& name, int width, int height);
		~Window();
		bool closed() const;
		void clear() const;
		void update();
		inline int getWidth() const  { return m_width;  }
		inline int getHeight() const { return m_height; }

		bool isKeyPressed(unsigned int keycode) const;
		bool isMouseButtonPressed(unsigned int button) const;
		glm::vec2 getMousePosition() const;

	private:
		bool init();
		friend static void key_callback(GLFWwindow* window, int key, int scancode, int action,
			int mods);
		friend static void mouse_button_callback(GLFWwindow* window, int button, int action,
			int mods);
		friend static void cursor_pos_callback(GLFWwindow* window, double xpos, double ypos);
	};
}
}