{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"
#include "{{OperationName|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} {{OperationName}} requests.
 *
 * \inmodule QtAws{{NameSpaceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ServiceName}}Client::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/*!
 * Constructs a copy of \a other.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : {{ServiceName}}Request(new {{ClassName}}Private(*other.d_func(), this))
{

}

/*!
 * Constructs a {{ClassName}} object.
 */
{{ClassName}}::{{ClassName}}()
    : {{ServiceName}}Request(new {{ClassName}}Private({{ServiceName}}Request::{{OperationName}}Action, this))
{

}

/*!
 * \reimp
 */
bool {{ClassName}}::isValid() const
{
    return false;{# @todo #}
}

{# @todo Accessor methods #}

/*!
 * Returns a {{OperationName}}Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * {{ClassName}}::response(QNetworkReply * const reply) const
{
    return new {{OperationName}}Response(*this, reply);
}

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{NameSpaceName}}
 */

/*!
 *
 * Constructs a {{ClassName}}Private object for {{ServiceName}} \a action with,
 * public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ServiceName}}Request::Action action, {{ClassName}} * const q)
    : {{ServiceName}}RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the {{ClassName}}
 * class' copy constructor.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ClassName}}Private &other, {{ClassName}} * const q)
    : {{ServiceName}}RequestPrivate(other, q)
{

}

} // namespace {{NameSpaceName}}
} // namespace QtAws
