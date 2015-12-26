#pragma once

#include <vector>
#include <GL/glew.h>

#include "buffer.h"

namespace reboot {
	namespace driver {

		class VertexArray {
		private:
			GLuint m_ArrayID;
			std::vector<Buffer*> m_Buffers;

		public:
			VertexArray();
			~VertexArray();
			
			void addBuffer(Buffer* buffer, GLuint index);
			void bind() const;
			void unbind() const;
		};

	}
}