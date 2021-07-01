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
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::PinpointSMSVoiceRequest
 * \brief The PinpointSMSVoiceRequest class provides an interface for PinpointSMSVoice requests.
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * \enum PinpointSMSVoiceRequest::Action
 *
 * This enum describes the actions that can be performed as PinpointSMSVoice
 * requests.
 *
 * \value CreateConfigurationSetAction PinpointSMSVoice CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction PinpointSMSVoice CreateConfigurationSetEventDestination action.
 * \value DeleteConfigurationSetAction PinpointSMSVoice DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction PinpointSMSVoice DeleteConfigurationSetEventDestination action.
 * \value GetConfigurationSetEventDestinationsAction PinpointSMSVoice GetConfigurationSetEventDestinations action.
 * \value ListConfigurationSetsAction PinpointSMSVoice ListConfigurationSets action.
 * \value SendVoiceMessageAction PinpointSMSVoice SendVoiceMessage action.
 * \value UpdateConfigurationSetEventDestinationAction PinpointSMSVoice UpdateConfigurationSetEventDestination action.
 */

/*!
 * Constructs a PinpointSMSVoiceRequest object for PinpointSMSVoice \a action.
 */
PinpointSMSVoiceRequest::PinpointSMSVoiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PinpointSMSVoiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PinpointSMSVoiceRequest::PinpointSMSVoiceRequest(const PinpointSMSVoiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PinpointSMSVoiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PinpointSMSVoiceRequest object to be equal to \a other.
 */
PinpointSMSVoiceRequest& PinpointSMSVoiceRequest::operator=(const PinpointSMSVoiceRequest &other)
{
    Q_D(PinpointSMSVoiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PinpointSMSVoiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointSMSVoiceRequestPrivate.
 */
PinpointSMSVoiceRequest::PinpointSMSVoiceRequest(PinpointSMSVoiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PinpointSMSVoice action to be performed by this request.
 */
PinpointSMSVoiceRequest::Action PinpointSMSVoiceRequest::action() const
{
    Q_D(const PinpointSMSVoiceRequest);
    return d->action;
}

/*!
 * Returns the name of the PinpointSMSVoice action to be performed by this request.
 */
QString PinpointSMSVoiceRequest::actionString() const
{
    return PinpointSMSVoiceRequestPrivate::toString(action());
}

/*!
 * Returns the PinpointSMSVoice API version implemented by this request.
 */
QString PinpointSMSVoiceRequest::apiVersion() const
{
    Q_D(const PinpointSMSVoiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the PinpointSMSVoice action to be performed by this request to \a action.
 */
void PinpointSMSVoiceRequest::setAction(const Action action)
{
    Q_D(PinpointSMSVoiceRequest);
    d->action = action;
}

/*!
 * Sets the PinpointSMSVoice API version to include in this request to \a version.
 */
void PinpointSMSVoiceRequest::setApiVersion(const QString &version)
{
    Q_D(PinpointSMSVoiceRequest);
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
bool PinpointSMSVoiceRequest::operator==(const PinpointSMSVoiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PinpointSMSVoice queue name.
 *
 * @par From PinpointSMSVoice FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PinpointSMSVoice queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PinpointSMSVoiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PinpointSMSVoiceRequest::clearParameter(const QString &name)
{
    Q_D(PinpointSMSVoiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PinpointSMSVoiceRequest::clearParameters()
{
    Q_D(PinpointSMSVoiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PinpointSMSVoiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PinpointSMSVoiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PinpointSMSVoiceRequest::parameters() const
{
    Q_D(const PinpointSMSVoiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PinpointSMSVoiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PinpointSMSVoiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PinpointSMSVoiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PinpointSMSVoiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PinpointSMSVoice request using the given
 * \a endpoint.
 *
 * This PinpointSMSVoice implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PinpointSMSVoiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PinpointSMSVoiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PinpointSMSVoice::PinpointSMSVoiceRequestPrivate
 * \brief The PinpointSMSVoiceRequestPrivate class provides private implementation for PinpointSMSVoiceRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a PinpointSMSVoiceRequestPrivate object for PinpointSMSVoice \a action,
 * with public implementation \a q.
 */
PinpointSMSVoiceRequestPrivate::PinpointSMSVoiceRequestPrivate(const PinpointSMSVoiceRequest::Action action, PinpointSMSVoiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PinpointSMSVoiceRequest class's copy constructor.
 */
PinpointSMSVoiceRequestPrivate::PinpointSMSVoiceRequestPrivate(const PinpointSMSVoiceRequestPrivate &other,
                                     PinpointSMSVoiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PinpointSMSVoiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PinpointSMSVoice service's Action
 * query parameters.
 */
QString PinpointSMSVoiceRequestPrivate::toString(const PinpointSMSVoiceRequest::Action &action)
{
    #define ActionToString(action) \
        case PinpointSMSVoiceRequest::action##Action: return QStringLiteral(#action)
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

} // namespace PinpointSMSVoice
} // namespace QtAws
