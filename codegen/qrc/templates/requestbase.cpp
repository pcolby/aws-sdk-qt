{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 *
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} requests.
 *
 * \ingroup {{NameSpaceName}}
 */

/*!
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  action  The {{ServiceName}} action to request.
 */
{{ClassName}}::{{ClassName}}(const Action action)
    : QtAws::Core::AwsAbstractRequest(new {{ClassName}}Private(action, this))
{

}

/*!
 * @brief  Constructs a new {{ClassName}} object by copying another.
 *
 * @param  other  Instance to copy.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : QtAws::Core::AwsAbstractRequest(new {{ClassName}}Private(*other.d_func(), this))
{

}

/*!
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
{{ClassName}}& {{ClassName}}::operator=(const {{ClassName}} &other)
{
    Q_D({{ClassName}});
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new {{ClassName}} object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from {{ClassName}}Private.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
{{ClassName}}::{{ClassName}}({{ClassName}}Private * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the {{ServiceName}} action to be performed by this request.
 */
{{ClassName}}::Action {{ClassName}}::action() const
{
    Q_D(const {{ClassName}});
    return d->action;
}

/*!
 * \brief Returns the name of the {{ServiceName}} action to be performed by this request.
 */
QString {{ClassName}}::actionString() const
{
    return {{ClassName}}Private::toString(action());
}

/*!
 * \brief Returns the {{ServiceName}} API version implemented by this request.
 */
QString {{ClassName}}::apiVersion() const
{
    Q_D(const {{ClassName}});
    return d->apiVersion;
}

/*!
 * @brief Set the {{ServiceName}} action to be performed by this request to \a action.
 */
void {{ClassName}}::setAction(const Action action)
{
    Q_D({{ClassName}});
    d->action = action;
}

/*!
 * Set the {{ServiceName}} API version to include in this request to \a version.
 */
void {{ClassName}}::setApiVersion(const QString &version)
{
    Q_D({{ClassName}});
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool {{ClassName}}::operator==(const {{ClassName}} &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
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
/*bool {{ClassName}}::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int {{ClassName}}::clearParameter(const QString &name)
{
    Q_D({{ClassName}});
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void {{ClassName}}::clearParameters()
{
    Q_D({{ClassName}});
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant {{ClassName}}::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const {{ClassName}});
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &{{ClassName}}::parameters() const
{
    Q_D(const {{ClassName}});
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void {{ClassName}}::setParameter(const QString &name, const QVariant &value)
{
    Q_D({{ClassName}});
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void {{ClassName}}::setParameters(const QVariantMap &parameters)
{
    Q_D({{ClassName}});
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this {{ServiceName}} request using the given \a endpoint.
 *
 * This {{ServiceName}} implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest {{ClassName}}::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const {{ClassName}});
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  {{ClassName}}Private
 *
 * \brief  Private implementation for {{ClassName}}.
 */

/*!
 * \internal
 *
 * \brief Constructs a new {{ClassName}}Private object.
 */
{{ClassName}}Private::{{ClassName}}Private(const {{ClassName}}::Action action, {{ClassName}} * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new {{ClassName}}Private object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the {{ClassName}} class's copy constructor.
 */
{{ClassName}}Private::{{ClassName}}Private(const {{ClassName}}Private &other,
                                     {{ClassName}} * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts {{ClassName}}::Action enumerator values to their respective
 * string representations, appropriate for use with the {{ServiceName}} service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString {{ClassName}}Private::toString(const {{ClassName}}::Action &action)
{
    #define ActionToString(action) \
        case {{ClassName}}::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace {{NameSpaceName}}
} // namespace QtAws
