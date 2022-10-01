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

#include "ivschatrequest.h"
#include "ivschatrequest_p.h"

namespace QtAws {
namespace IvsChat {

/*!
 * \class QtAws::IvsChat::IvsChatRequest
 * \brief The IvsChatRequest class provides an interface for IvsChat requests.
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * \enum IvsChatRequest::Action
 *
 * This enum describes the actions that can be performed as IvsChat
 * requests.
 *
 * \value CreateChatTokenAction IvsChat CreateChatToken action.
 * \value CreateRoomAction IvsChat CreateRoom action.
 * \value DeleteMessageAction IvsChat DeleteMessage action.
 * \value DeleteRoomAction IvsChat DeleteRoom action.
 * \value DisconnectUserAction IvsChat DisconnectUser action.
 * \value GetRoomAction IvsChat GetRoom action.
 * \value ListRoomsAction IvsChat ListRooms action.
 * \value ListTagsForResourceAction IvsChat ListTagsForResource action.
 * \value SendEventAction IvsChat SendEvent action.
 * \value TagResourceAction IvsChat TagResource action.
 * \value UntagResourceAction IvsChat UntagResource action.
 * \value UpdateRoomAction IvsChat UpdateRoom action.
 */

/*!
 * Constructs a IvsChatRequest object for IvsChat \a action.
 */
IvsChatRequest::IvsChatRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IvsChatRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IvsChatRequest::IvsChatRequest(const IvsChatRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IvsChatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IvsChatRequest object to be equal to \a other.
 */
IvsChatRequest& IvsChatRequest::operator=(const IvsChatRequest &other)
{
    Q_D(IvsChatRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IvsChatRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IvsChatRequestPrivate.
 */
IvsChatRequest::IvsChatRequest(IvsChatRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IvsChat action to be performed by this request.
 */
IvsChatRequest::Action IvsChatRequest::action() const
{
    Q_D(const IvsChatRequest);
    return d->action;
}

/*!
 * Returns the name of the IvsChat action to be performed by this request.
 */
QString IvsChatRequest::actionString() const
{
    return IvsChatRequestPrivate::toString(action());
}

/*!
 * Returns the IvsChat API version implemented by this request.
 */
QString IvsChatRequest::apiVersion() const
{
    Q_D(const IvsChatRequest);
    return d->apiVersion;
}

/*!
 * Sets the IvsChat action to be performed by this request to \a action.
 */
void IvsChatRequest::setAction(const Action action)
{
    Q_D(IvsChatRequest);
    d->action = action;
}

/*!
 * Sets the IvsChat API version to include in this request to \a version.
 */
void IvsChatRequest::setApiVersion(const QString &version)
{
    Q_D(IvsChatRequest);
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
bool IvsChatRequest::operator==(const IvsChatRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IvsChat queue name.
 *
 * @par From IvsChat FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IvsChat queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IvsChatRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IvsChatRequest::clearParameter(const QString &name)
{
    Q_D(IvsChatRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IvsChatRequest::clearParameters()
{
    Q_D(IvsChatRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IvsChatRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IvsChatRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IvsChatRequest::parameters() const
{
    Q_D(const IvsChatRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IvsChatRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IvsChatRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IvsChatRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IvsChatRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IvsChat request using the given
 * \a endpoint.
 *
 * This IvsChat implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IvsChatRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IvsChatRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IvsChat::IvsChatRequestPrivate
 * \brief The IvsChatRequestPrivate class provides private implementation for IvsChatRequest.
 * \internal
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatRequestPrivate object for IvsChat \a action,
 * with public implementation \a q.
 */
IvsChatRequestPrivate::IvsChatRequestPrivate(const IvsChatRequest::Action action, IvsChatRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-14"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IvsChatRequest class's copy constructor.
 */
IvsChatRequestPrivate::IvsChatRequestPrivate(const IvsChatRequestPrivate &other,
                                     IvsChatRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IvsChatRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IvsChat service's Action
 * query parameters.
 */
QString IvsChatRequestPrivate::toString(const IvsChatRequest::Action &action)
{
    #define ActionToString(action) \
        case IvsChatRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateChatToken);
        ActionToString(CreateRoom);
        ActionToString(DeleteMessage);
        ActionToString(DeleteRoom);
        ActionToString(DisconnectUser);
        ActionToString(GetRoom);
        ActionToString(ListRooms);
        ActionToString(ListTagsForResource);
        ActionToString(SendEvent);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateRoom);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IvsChat
} // namespace QtAws
