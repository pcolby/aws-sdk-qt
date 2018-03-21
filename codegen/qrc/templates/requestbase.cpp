{% include "license.txt" %}
#include "{{OperationName|lower}}request.h"
#include "{{OperationName|lower}}request_p.h"
#include "{{OperationName|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace AWS {
namespace {{ServiceName}} {

/**
 * @class  {{ClassName}}Request
 *
 * @brief  Interface class for providing {{ServiceName}} requests
 */


/**
 * @brief  Constructs a new {{ClassName}}Request object.
 *
 * @param  action  The {{ServiceName}} action to request.
 */
{{ClassName}}Request::{{ClassName}}Request(const Action action)
    : AwsAbstractRequest(new {{ClassName}}RequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new {{ClassName}}Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
{{ClassName}}Request::{{ClassName}}Request(const {{ClassName}}Request &other)
    : AwsAbstractRequest(new {{ClassName}}RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
{{ClassName}}Request& {{ClassName}}Request::operator=(const {{ClassName}}Request &other)
{
    Q_D({{ClassName}}Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Request object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from {{ClassName}}RequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
{{ClassName}}Request::{{ClassName}}Request({{ClassName}}RequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the {{ServiceName}} action to be performed by this request.
 *
 * @return The {{ServiceName}} action to be performed by this request.
 */
{{ClassName}}Request::Action {{ClassName}}Request::action() const
{
    Q_D(const {{ClassName}}Request);
    return d->action;
}

/**
 * @brief Get the name of the {{ServiceName}} action to be performed by this request.
 *
 * @return The name of the {{ServiceName}} action to be performed by this request.
 */
QString {{ClassName}}Request::actionString() const
{
    return {{ClassName}}RequestPrivate::toString(action());
}

/**
 * @brief  Get the {{ServiceName}} API version implemented by this request.
 *
 * @return The {{ServiceName}} API version implmented by this request.
 */
QString {{ClassName}}Request::apiVersion() const
{
    Q_D(const {{ClassName}}Request);
    return d->apiVersion;
}

/**
 * @brief  Set the {{ServiceName}} action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void {{ClassName}}Request::setAction(const Action action)
{
    Q_D({{ClassName}}Request);
    d->action = action;
}

/**
 * @brief  Set the {{ServiceName}} API version to include in this request.
 *
 * @param  version  The {{ServiceName}} API version to include in this request.
 */
void {{ClassName}}Request::setApiVersion(const QString &version)
{
    Q_D({{ClassName}}Request);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool {{ClassName}}Request::operator==(const {{ClassName}}Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid {{ServiceName}} queue name.
 *
 * @par From {{ServiceName}} FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid {{ServiceName}} queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool {{ClassName}}Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int {{ClassName}}Request::clearParameter(const QString &name)
{
    Q_D({{ClassName}}Request);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void {{ClassName}}Request::clearParameters()
{
    Q_D({{ClassName}}Request);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this {{ServiceName}} request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant {{ClassName}}Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const {{ClassName}}Request);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this {{ServiceName}} request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &{{ClassName}}Request::parameters() const
{
    Q_D(const {{ClassName}}Request);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this {{ServiceName}} request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void {{ClassName}}Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D({{ClassName}}Request);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this {{ServiceName}} request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void {{ClassName}}Request::setParameters(const QVariantMap &parameters)
{
    Q_D({{ClassName}}Request);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this {{ServiceName}} request.
 *
 * This {{ServiceName}} implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this {{ServiceName}} request using the given \a endpoint.
 */
QNetworkRequest {{ClassName}}Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const {{ClassName}}Request);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  {{ClassName}}RequestPrivate
 *
 * @brief  Private implementation for {{ClassName}}Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}RequestPrivate object.
 *
 * @param  action  {{ServiceName}} action being performed by the \a q request.
 * @param  q       Pointer to this object's public {{ClassName}}Request instance.
 */
{{ClassName}}RequestPrivate::{{ClassName}}RequestPrivate(const {{ClassName}}Request::Action action, {{ClassName}}Request * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}RequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the {{ClassName}}Request class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public {{ClassName}}Request instance.
 */
{{ClassName}}RequestPrivate::{{ClassName}}RequestPrivate(const {{ClassName}}RequestPrivate &other,
                                     {{ClassName}}Request * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and {{ServiceName}} action to a string.
 *
 * This function converts {{ClassName}}Request::Action enumerator values to their respective
 * string representations, appropriate for use with the {{ServiceName}} service's Action
 * query parameters.
 *
 * @param  action  {{ServiceName}} action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString {{ClassName}}RequestPrivate::toString(const {{ClassName}}Request::Action &action)
{
    #define ActionToString(action) \
        case {{ClassName}}Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace {{ServiceName}}
} // namespace AWS
