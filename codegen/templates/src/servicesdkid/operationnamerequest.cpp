{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with operation.name|add:"Request" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"
#include "{{OperationName|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} {{OperationName}} requests.
 *
 * \inmodule QtAws{{ServiceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ClientClassName}}::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/*!
 * Constructs a copy of \a other.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : {{ServiceClass}}Request(new {{ClassName}}Private(*other.d_func(), this))
{

}

/*!
 * Constructs a {{ClassName}} object.
 */
{{ClassName}}::{{ClassName}}()
    : {{ServiceClass}}Request(new {{ClassName}}Private({{ServiceClass}}Request::{{OperationName}}Action, this))
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
 * \class QtAws::{{ServiceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object for {{ServiceClass}} \a action,
 * with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ServiceClass}}Request::Action action, {{ClassName}} * const q)
    : {{ServiceClass}}RequestPrivate(action, q)
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
    : {{ServiceClass}}RequestPrivate(other, q)
{

}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
