/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "configservicerequest.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::ConfigServiceRequest
 *
 * \brief The ConfigServiceRequest class provides an interface for ConfigService requests.
 *
 * \ingroup ConfigService
 */

/*!
 * @brief  Constructs a new ConfigServiceRequest object.
 *
 * @param  action  The ConfigService action to request.
 */
ConfigServiceRequest::ConfigServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConfigServiceRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new ConfigServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfigServiceRequest::ConfigServiceRequest(const ConfigServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConfigServiceRequestPrivate(*other.d_func(), this))
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
ConfigServiceRequest& ConfigServiceRequest::operator=(const ConfigServiceRequest &other)
{
    Q_D(ConfigServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new ConfigServiceRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConfigServiceRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ConfigServiceRequest::ConfigServiceRequest(ConfigServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the ConfigService action to be performed by this request.
 */
ConfigServiceRequest::Action ConfigServiceRequest::action() const
{
    Q_D(const ConfigServiceRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the ConfigService action to be performed by this request.
 */
QString ConfigServiceRequest::actionString() const
{
    return ConfigServiceRequestPrivate::toString(action());
}

/*!
 * \brief Returns the ConfigService API version implemented by this request.
 */
QString ConfigServiceRequest::apiVersion() const
{
    Q_D(const ConfigServiceRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the ConfigService action to be performed by this request to \a action.
 */
void ConfigServiceRequest::setAction(const Action action)
{
    Q_D(ConfigServiceRequest);
    d->action = action;
}

/*!
 * Set the ConfigService API version to include in this request to \a version.
 */
void ConfigServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ConfigServiceRequest);
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
bool ConfigServiceRequest::operator==(const ConfigServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid ConfigService queue name.
 *
 * @par From ConfigService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConfigService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConfigServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int ConfigServiceRequest::clearParameter(const QString &name)
{
    Q_D(ConfigServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void ConfigServiceRequest::clearParameters()
{
    Q_D(ConfigServiceRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant ConfigServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConfigServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &ConfigServiceRequest::parameters() const
{
    Q_D(const ConfigServiceRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void ConfigServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConfigServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void ConfigServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConfigServiceRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this ConfigService request using the given \a endpoint.
 *
 * This ConfigService implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest ConfigServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ConfigServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  ConfigServiceRequestPrivate
 *
 * \brief  Private implementation for ConfigServiceRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new ConfigServiceRequestPrivate object.
 */
ConfigServiceRequestPrivate::ConfigServiceRequestPrivate(const ConfigServiceRequest::Action action, ConfigServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new ConfigServiceRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConfigServiceRequest class's copy constructor.
 */
ConfigServiceRequestPrivate::ConfigServiceRequestPrivate(const ConfigServiceRequestPrivate &other,
                                     ConfigServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts ConfigServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConfigService service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ConfigServiceRequestPrivate::toString(const ConfigServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ConfigServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConfigService
} // namespace QtAws
