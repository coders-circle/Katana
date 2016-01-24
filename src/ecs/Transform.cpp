#include <stdinc.h>
#include <ecs/ecs.h>
#include <ecs/Transform.h>


void Transform::SetParent(Transform* parent)
{
    if (!parent)
        return;

    if (m_parent)
        RemoveValue(m_parent->m_children, this);

    m_parent = parent;
    m_parent->m_children.push_back(this);
}
