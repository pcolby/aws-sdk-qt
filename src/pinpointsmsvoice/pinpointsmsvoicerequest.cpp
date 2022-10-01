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

#include "pinpointsmsvoicerequest.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceRequest
 * \brief The PinpointSmsVoiceRequest class provides an interface for PinpointSmsVoice requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * \enum PinpointSmsVoiceRequest::Action
 *
 * This enum describes the actions that can be performed as PinpointSmsVoice
 * requests.
 *
 * \value CreateConfigurationSetAction PinpointSmsVoice CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction PinpointSmsVoice CreateConfigurationSetEventDestination action.
 * \value DeleteConfigurationSetAction PinpointSmsVoice DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction PinpointSmsVoice DeleteConfigurationSetEventDestination action.
 * \value GetConfigurationSetEventDestinationsAction PinpointSmsVoice GetConfigurationSetEventDestinations action.
 * \value ListConfigurationSetsAction PinpointSmsVoice ListConfigurationSets action.
 * \value SendVoiceMessageAction PinpointSmsVoice SendVoiceMessage action.
 * \value UpdateConfigurationSetEventDestinationAction PinpointSmsVoice UpdateConfigurationSetEventDestination action.
 */

/*!
 * Constructs a PinpointSmsVoiceRequest object for PinpointSmsVoice \a action.
 */
PinpointSmsVoiceRequest::PinpointSmsVoiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PinpointSmsVoiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PinpointSmsVoiceRequest::PinpointSmsVoiceRequest(const PinpointSmsVoiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PinpointSmsVoiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PinpointSmsVoiceRequest object to be equal to \a other.
 */
PinpointSmsVoiceRequest& PinpointSmsVoiceRequest::operator=(const PinpointSmsVoiceRequest &other)
{
    Q_D(PinpointSmsVoiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PinpointSmsVoiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSmsVoiceRequestPrivate.
 */
PinpointSmsVoiceRequest::PinpointSmsVoiceRequest(PinpointSmsVoiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PinpointSmsVoice action to be performed by this request.
 */
PinpointSmsVoiceRequest::Action PinpointSmsVoiceRequest::action() const
{
    Q_D(const PinpointSmsVoiceRequest);
    return d->action;
}

/*!
 * Returns the name of the PinpointSmsVoice action to be performed by this request.
 */
QString PinpointSmsVoiceRequest::actionString() const
{
    return PinpointSmsVoiceRequestPrivate::toString(action());
}

/*!
 * Returns the PinpointSmsVoice API version implemented by this request.
 */
QString PinpointSmsVoiceRequest::apiVersion() const
{
    Q_D(const PinpointSmsVoiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the PinpointSmsVoice action to be performed by this request to \a action.
 */
void PinpointSmsVoiceRequest::setAction(const Action action)
{
    Q_D(PinpointSmsVoiceRequest);
    d->action = action;
}

/*!
 * Sets the PinpointSmsVoice API version to include in this request to \a version.
 */
void PinpointSmsVoiceRequest::setApiVersion(const QString &version)
{
    Q_D(PinpointSmsVoiceRequest);
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
bool PinpointSmsVoiceRequest::operator==(const PinpointSmsVoiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PinpointSmsVoice queue name.
 *
 * @par From PinpointSmsVoice FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PinpointSmsVoice queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PinpointSmsVoiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PinpointSmsVoiceRequest::clearParameter(const QString &name)
{
    Q_D(PinpointSmsVoiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PinpointSmsVoiceRequest::clearParameters()
{
    Q_D(PinpointSmsVoiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PinpointSmsVoiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PinpointSmsVoiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PinpointSmsVoiceRequest::parameters() const
{
    Q_D(const PinpointSmsVoiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PinpointSmsVoiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PinpointSmsVoiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PinpointSmsVoiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PinpointSmsVoiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PinpointSmsVoice request using the given
 * \a endpoint.
 *
 * This PinpointSmsVoice implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PinpointSmsVoiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PinpointSmsVoiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceRequestPrivate
 * \brief The PinpointSmsVoiceRequestPrivate class provides private implementation for PinpointSmsVoiceRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a PinpointSmsVoiceRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
PinpointSmsVoiceRequestPrivate::PinpointSmsVoiceRequestPrivate(const PinpointSmsVoiceRequest::Action action, PinpointSmsVoiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-09-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PinpointSmsVoiceRequest class's copy constructor.
 */
PinpointSmsVoiceRequestPrivate::PinpointSmsVoiceRequestPrivate(const PinpointSmsVoiceRequestPrivate &other,
                                     PinpointSmsVoiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PinpointSmsVoiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PinpointSmsVoice service's Action
 * query parameters.
 */
QString PinpointSmsVoiceRequestPrivate::toString(const PinpointSmsVoiceRequest::Action &action)
{
    #define ActionToString(action) \
        case PinpointSmsVoiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConfigurationSet);
        ActionToString(CreateConfigurationSetEventDestination);
        ActionToString(DeleteConfigurationSet);
        ActionToString(DeleteConfigurationSetEventDestination);
        ActionToString(GetConfigurationSetEventDestinations);
        ActionToString(ListConfigurationSets);
        ActionToString(SendVoiceMessage);
        ActionToString(UpdateConfigurationSetEventDestination);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PinpointSmsVoice
} // namespace QtAws
