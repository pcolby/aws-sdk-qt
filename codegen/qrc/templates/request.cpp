{% include "license.txt" %}
#include "{{OperationName|lower}}request.h"
#include "{{OperationName|lower}}request_p.h"
#include "{{OperationName|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace AWS {
namespace {{ServiceName}} {

/**
 * @class  {{OperationName}}Request
 *
 * @brief  Implements {{ServiceName}} {{OperationName}} requests.
 *
 * @see    {{ServiceName}}Client::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/**
 * @brief  Constructs a new {{OperationName}}Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
{{OperationName}}Request::{{OperationName}}Request(const {{OperationName}}Request &other)
    : {{ServiceName}}Request(new {{OperationName}}RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new {{OperationName}}Request object.
 */
{{OperationName}}Request::{{OperationName}}Request()
    : {{ServiceName}}Request(new {{OperationName}}RequestPrivate({{ServiceName}}Request::{{OperationName}}Action, this))
{

}

bool {{OperationName}}Request::isValid() const
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
 * @see  AwsAbstractClient::send
 * @see  {{ServiceName}}Client::send
 */
AwsAbstractResponse * {{OperationName}}Request::response(QNetworkReply * const reply) const
{
    return new {{OperationName}}Response(*this, reply);
}

/**
 * @internal
 *
 * @class  {{OperationName}}RequestPrivate
 *
 * @brief  Private implementation for {{OperationName}}Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{OperationName}}RequestPrivate object.
 *
 * @param  action  {{ServiceName}} action being performed.
 * @param  q       Pointer to this object's public {{OperationName}}Request instance.
 */
{{OperationName}}RequestPrivate::{{OperationName}}RequestPrivate(
    const {{ServiceName}}Request::Action action, {{OperationName}}Request * const q)
    : {{OperationName}}Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new {{OperationName}}RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the {{OperationName}}Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public {{OperationName}}Request instance.
 */
{{OperationName}}RequestPrivate::{{OperationName}}RequestPrivate(
    const {{OperationName}}RequestPrivate &other, {{OperationName}}Request * const q)
    : {{OperationName}}Private(other, q)
{

}

} // namespace {{ServiceName}}
} // namespace AWS
