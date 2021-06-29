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

#include "connectparticipantrequest.h"
#include "connectparticipantrequest_p.h"

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantRequest
 * \brief The ConnectParticipantRequest class provides an interface for ConnectParticipant requests.
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * \enum ConnectParticipantRequest::Action
 *
 * This enum describes the actions that can be performed as ConnectParticipant
 * requests.
 *
 * \value CompleteAttachmentUploadAction ConnectParticipant CompleteAttachmentUpload action.
 * \value CreateParticipantConnectionAction ConnectParticipant CreateParticipantConnection action.
 * \value DisconnectParticipantAction ConnectParticipant DisconnectParticipant action.
 * \value GetAttachmentAction ConnectParticipant GetAttachment action.
 * \value GetTranscriptAction ConnectParticipant GetTranscript action.
 * \value SendEventAction ConnectParticipant SendEvent action.
 * \value SendMessageAction ConnectParticipant SendMessage action.
 * \value StartAttachmentUploadAction ConnectParticipant StartAttachmentUpload action.
 */

/*!
 * Constructs a ConnectParticipantRequest object for ConnectParticipant \a action.
 */
ConnectParticipantRequest::ConnectParticipantRequest(const Action action)
    : d_ptr(new ConnectParticipantRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConnectParticipantRequest::ConnectParticipantRequest(const ConnectParticipantRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ConnectParticipantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConnectParticipantRequest object to be equal to \a other.
 */
ConnectParticipantRequest& ConnectParticipantRequest::operator=(const ConnectParticipantRequest &other)
{
    Q_D(ConnectParticipantRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConnectParticipantRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectParticipantRequestPrivate.
 */
ConnectParticipantRequest::ConnectParticipantRequest(ConnectParticipantRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ConnectParticipant action to be performed by this request.
 */
ConnectParticipantRequest::Action ConnectParticipantRequest::action() const
{
    Q_D(const ConnectParticipantRequest);
    return d->action;
}

/*!
 * Returns the name of the ConnectParticipant action to be performed by this request.
 */
QString ConnectParticipantRequest::actionString() const
{
    return ConnectParticipantRequestPrivate::toString(action());
}

/*!
 * Returns the ConnectParticipant API version implemented by this request.
 */
QString ConnectParticipantRequest::apiVersion() const
{
    Q_D(const ConnectParticipantRequest);
    return d->apiVersion;
}

/*!
 * Sets the ConnectParticipant action to be performed by this request to \a action.
 */
void ConnectParticipantRequest::setAction(const Action action)
{
    Q_D(ConnectParticipantRequest);
    d->action = action;
}

/*!
 * Sets the ConnectParticipant API version to include in this request to \a version.
 */
void ConnectParticipantRequest::setApiVersion(const QString &version)
{
    Q_D(ConnectParticipantRequest);
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
bool ConnectParticipantRequest::operator==(const ConnectParticipantRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ConnectParticipant queue name.
 *
 * @par From ConnectParticipant FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConnectParticipant queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConnectParticipantRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConnectParticipantRequest::clearParameter(const QString &name)
{
    Q_D(ConnectParticipantRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConnectParticipantRequest::clearParameters()
{
    Q_D(ConnectParticipantRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConnectParticipantRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConnectParticipantRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConnectParticipantRequest::parameters() const
{
    Q_D(const ConnectParticipantRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConnectParticipantRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConnectParticipantRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConnectParticipantRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConnectParticipantRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ConnectParticipant request using the given
 * \a endpoint.
 *
 * This ConnectParticipant implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConnectParticipantRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConnectParticipantRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantRequestPrivate
 * \brief The ConnectParticipantRequestPrivate class provides private implementation for ConnectParticipantRequest.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantRequestPrivate object for ConnectParticipant \a action,
 * with public implementation \a q.
 */
ConnectParticipantRequestPrivate::ConnectParticipantRequestPrivate(const ConnectParticipantRequest::Action action, ConnectParticipantRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConnectParticipantRequest class's copy constructor.
 */
ConnectParticipantRequestPrivate::ConnectParticipantRequestPrivate(const ConnectParticipantRequestPrivate &other,
                                     ConnectParticipantRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConnectParticipantRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConnectParticipant service's Action
 * query parameters.
 */
QString ConnectParticipantRequestPrivate::toString(const ConnectParticipantRequest::Action &action)
{
    #define ActionToString(action) \
        case ConnectParticipantRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CompleteAttachmentUpload);
        ActionToString(CreateParticipantConnection);
        ActionToString(DisconnectParticipant);
        ActionToString(GetAttachment);
        ActionToString(GetTranscript);
        ActionToString(SendEvent);
        ActionToString(SendMessage);
        ActionToString(StartAttachmentUpload);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConnectParticipant
} // namespace QtAws
