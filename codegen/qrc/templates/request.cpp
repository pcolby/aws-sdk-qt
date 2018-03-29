{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"
#include "{{OperationName|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace QtAws {
namespace {{NameSpaceName}} {

/**
 * @class  {{ClassName}}
 *
 * @brief  Implements {{ServiceName}} {{OperationName}} requests.
 *
 * @see    {{ServiceName}}Client::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/**
 * @brief  Constructs a new {{ClassName}} object by copying another.
 *
 * @param  other  Instance to copy.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : {{ServiceName}}Request(new {{ClassName}}Private(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new {{ClassName}} object.
 */
{{ClassName}}::{{ClassName}}()
    : {{ServiceName}}Request(new {{ClassName}}Private({{ServiceName}}Request::{{OperationName}}Action, this))
{

}

bool {{ClassName}}::isValid() const
{
    return false;{# @todo #}
}

{# @todo Accessor methods #}

/**
 * @brief  Construct an {{OperationName}}Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An {{OperationName}}Response instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  {{ServiceName}}Client::send
 */
QtAws::Core::AwsAbstractResponse * {{ClassName}}::response(QNetworkReply * const reply) const
{
    return new {{OperationName}}Response(*this, reply);
}

/**
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  action  {{ServiceName}} action being performed.
 * @param  q       Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ServiceName}}Request::Action action, {{ClassName}} * const q)
    : {{OperationName}}Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object, copying another.
 *
 * This copy-like constructor exists for the benefit of the {{ClassName}}
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ClassName}}Private &other, {{ClassName}} * const q)
    : {{OperationName}}Private(other, q)
{

}

} // namespace {{NameSpaceName}}
} // namespace QtAws
