/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sagemakeredgemanagerrequest.h"
#include "sagemakeredgemanagerrequest_p.h"

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerRequest
 * \brief The SagemakerEdgeManagerRequest class provides an interface for SagemakerEdgeManager requests.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * \enum SagemakerEdgeManagerRequest::Action
 *
 * This enum describes the actions that can be performed as SagemakerEdgeManager
 * requests.
 *
 * \value GetDeviceRegistrationAction SagemakerEdgeManager GetDeviceRegistration action.
 * \value SendHeartbeatAction SagemakerEdgeManager SendHeartbeat action.
 */

/*!
 * Constructs a SagemakerEdgeManagerRequest object for SagemakerEdgeManager \a action.
 */
SagemakerEdgeManagerRequest::SagemakerEdgeManagerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SagemakerEdgeManagerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SagemakerEdgeManagerRequest::SagemakerEdgeManagerRequest(const SagemakerEdgeManagerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SagemakerEdgeManagerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SagemakerEdgeManagerRequest object to be equal to \a other.
 */
SagemakerEdgeManagerRequest& SagemakerEdgeManagerRequest::operator=(const SagemakerEdgeManagerRequest &other)
{
    Q_D(SagemakerEdgeManagerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SagemakerEdgeManagerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SagemakerEdgeManagerRequestPrivate.
 */
SagemakerEdgeManagerRequest::SagemakerEdgeManagerRequest(SagemakerEdgeManagerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SagemakerEdgeManager action to be performed by this request.
 */
SagemakerEdgeManagerRequest::Action SagemakerEdgeManagerRequest::action() const
{
    Q_D(const SagemakerEdgeManagerRequest);
    return d->action;
}

/*!
 * Returns the name of the SagemakerEdgeManager action to be performed by this request.
 */
QString SagemakerEdgeManagerRequest::actionString() const
{
    return SagemakerEdgeManagerRequestPrivate::toString(action());
}

/*!
 * Returns the SagemakerEdgeManager API version implemented by this request.
 */
QString SagemakerEdgeManagerRequest::apiVersion() const
{
    Q_D(const SagemakerEdgeManagerRequest);
    return d->apiVersion;
}

/*!
 * Sets the SagemakerEdgeManager action to be performed by this request to \a action.
 */
void SagemakerEdgeManagerRequest::setAction(const Action action)
{
    Q_D(SagemakerEdgeManagerRequest);
    d->action = action;
}

/*!
 * Sets the SagemakerEdgeManager API version to include in this request to \a version.
 */
void SagemakerEdgeManagerRequest::setApiVersion(const QString &version)
{
    Q_D(SagemakerEdgeManagerRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool SagemakerEdgeManagerRequest::operator==(const SagemakerEdgeManagerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SagemakerEdgeManager queue name.
 *
 * @par From SagemakerEdgeManager FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SagemakerEdgeManager queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SagemakerEdgeManagerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SagemakerEdgeManagerRequest::clearParameter(const QString &name)
{
    Q_D(SagemakerEdgeManagerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SagemakerEdgeManagerRequest::clearParameters()
{
    Q_D(SagemakerEdgeManagerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SagemakerEdgeManagerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SagemakerEdgeManagerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SagemakerEdgeManagerRequest::parameters() const
{
    Q_D(const SagemakerEdgeManagerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SagemakerEdgeManagerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SagemakerEdgeManagerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SagemakerEdgeManagerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SagemakerEdgeManagerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SagemakerEdgeManager request using the given
 * \a endpoint.
 *
 * This SagemakerEdgeManager implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SagemakerEdgeManagerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SagemakerEdgeManagerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerRequestPrivate
 * \brief The SagemakerEdgeManagerRequestPrivate class provides private implementation for SagemakerEdgeManagerRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SagemakerEdgeManagerRequestPrivate object for SagemakerEdgeManager \a action,
 * with public implementation \a q.
 */
SagemakerEdgeManagerRequestPrivate::SagemakerEdgeManagerRequestPrivate(const SagemakerEdgeManagerRequest::Action action, SagemakerEdgeManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SagemakerEdgeManagerRequest class's copy constructor.
 */
SagemakerEdgeManagerRequestPrivate::SagemakerEdgeManagerRequestPrivate(const SagemakerEdgeManagerRequestPrivate &other,
                                     SagemakerEdgeManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SagemakerEdgeManagerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SagemakerEdgeManager service's Action
 * query parameters.
 */
QString SagemakerEdgeManagerRequestPrivate::toString(const SagemakerEdgeManagerRequest::Action &action)
{
    #define ActionToString(action) \
        case SagemakerEdgeManagerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetDeviceRegistration);
        ActionToString(SendHeartbeat);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SagemakerEdgeManager
} // namespace QtAws
