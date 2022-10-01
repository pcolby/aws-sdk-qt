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

#include "chimesdkmessagingrequest.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingRequest
 * \brief The ChimeSdkMessagingRequest class provides an interface for ChimeSdkMessaging requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * \enum ChimeSdkMessagingRequest::Action
 *
 * This enum describes the actions that can be performed as ChimeSdkMessaging
 * requests.
 *
 * \value AssociateChannelFlowAction ChimeSdkMessaging AssociateChannelFlow action.
 * \value BatchCreateChannelMembershipAction ChimeSdkMessaging BatchCreateChannelMembership action.
 * \value ChannelFlowCallbackAction ChimeSdkMessaging ChannelFlowCallback action.
 * \value CreateChannelAction ChimeSdkMessaging CreateChannel action.
 * \value CreateChannelBanAction ChimeSdkMessaging CreateChannelBan action.
 * \value CreateChannelFlowAction ChimeSdkMessaging CreateChannelFlow action.
 * \value CreateChannelMembershipAction ChimeSdkMessaging CreateChannelMembership action.
 * \value CreateChannelModeratorAction ChimeSdkMessaging CreateChannelModerator action.
 * \value DeleteChannelAction ChimeSdkMessaging DeleteChannel action.
 * \value DeleteChannelBanAction ChimeSdkMessaging DeleteChannelBan action.
 * \value DeleteChannelFlowAction ChimeSdkMessaging DeleteChannelFlow action.
 * \value DeleteChannelMembershipAction ChimeSdkMessaging DeleteChannelMembership action.
 * \value DeleteChannelMessageAction ChimeSdkMessaging DeleteChannelMessage action.
 * \value DeleteChannelModeratorAction ChimeSdkMessaging DeleteChannelModerator action.
 * \value DescribeChannelAction ChimeSdkMessaging DescribeChannel action.
 * \value DescribeChannelBanAction ChimeSdkMessaging DescribeChannelBan action.
 * \value DescribeChannelFlowAction ChimeSdkMessaging DescribeChannelFlow action.
 * \value DescribeChannelMembershipAction ChimeSdkMessaging DescribeChannelMembership action.
 * \value DescribeChannelMembershipForAppInstanceUserAction ChimeSdkMessaging DescribeChannelMembershipForAppInstanceUser action.
 * \value DescribeChannelModeratedByAppInstanceUserAction ChimeSdkMessaging DescribeChannelModeratedByAppInstanceUser action.
 * \value DescribeChannelModeratorAction ChimeSdkMessaging DescribeChannelModerator action.
 * \value DisassociateChannelFlowAction ChimeSdkMessaging DisassociateChannelFlow action.
 * \value GetChannelMembershipPreferencesAction ChimeSdkMessaging GetChannelMembershipPreferences action.
 * \value GetChannelMessageAction ChimeSdkMessaging GetChannelMessage action.
 * \value GetChannelMessageStatusAction ChimeSdkMessaging GetChannelMessageStatus action.
 * \value GetMessagingSessionEndpointAction ChimeSdkMessaging GetMessagingSessionEndpoint action.
 * \value ListChannelBansAction ChimeSdkMessaging ListChannelBans action.
 * \value ListChannelFlowsAction ChimeSdkMessaging ListChannelFlows action.
 * \value ListChannelMembershipsAction ChimeSdkMessaging ListChannelMemberships action.
 * \value ListChannelMembershipsForAppInstanceUserAction ChimeSdkMessaging ListChannelMembershipsForAppInstanceUser action.
 * \value ListChannelMessagesAction ChimeSdkMessaging ListChannelMessages action.
 * \value ListChannelModeratorsAction ChimeSdkMessaging ListChannelModerators action.
 * \value ListChannelsAction ChimeSdkMessaging ListChannels action.
 * \value ListChannelsAssociatedWithChannelFlowAction ChimeSdkMessaging ListChannelsAssociatedWithChannelFlow action.
 * \value ListChannelsModeratedByAppInstanceUserAction ChimeSdkMessaging ListChannelsModeratedByAppInstanceUser action.
 * \value ListSubChannelsAction ChimeSdkMessaging ListSubChannels action.
 * \value ListTagsForResourceAction ChimeSdkMessaging ListTagsForResource action.
 * \value PutChannelMembershipPreferencesAction ChimeSdkMessaging PutChannelMembershipPreferences action.
 * \value RedactChannelMessageAction ChimeSdkMessaging RedactChannelMessage action.
 * \value SearchChannelsAction ChimeSdkMessaging SearchChannels action.
 * \value SendChannelMessageAction ChimeSdkMessaging SendChannelMessage action.
 * \value TagResourceAction ChimeSdkMessaging TagResource action.
 * \value UntagResourceAction ChimeSdkMessaging UntagResource action.
 * \value UpdateChannelAction ChimeSdkMessaging UpdateChannel action.
 * \value UpdateChannelFlowAction ChimeSdkMessaging UpdateChannelFlow action.
 * \value UpdateChannelMessageAction ChimeSdkMessaging UpdateChannelMessage action.
 * \value UpdateChannelReadMarkerAction ChimeSdkMessaging UpdateChannelReadMarker action.
 */

/*!
 * Constructs a ChimeSdkMessagingRequest object for ChimeSdkMessaging \a action.
 */
ChimeSdkMessagingRequest::ChimeSdkMessagingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMessagingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeSdkMessagingRequest::ChimeSdkMessagingRequest(const ChimeSdkMessagingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMessagingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeSdkMessagingRequest object to be equal to \a other.
 */
ChimeSdkMessagingRequest& ChimeSdkMessagingRequest::operator=(const ChimeSdkMessagingRequest &other)
{
    Q_D(ChimeSdkMessagingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeSdkMessagingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMessagingRequestPrivate.
 */
ChimeSdkMessagingRequest::ChimeSdkMessagingRequest(ChimeSdkMessagingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ChimeSdkMessaging action to be performed by this request.
 */
ChimeSdkMessagingRequest::Action ChimeSdkMessagingRequest::action() const
{
    Q_D(const ChimeSdkMessagingRequest);
    return d->action;
}

/*!
 * Returns the name of the ChimeSdkMessaging action to be performed by this request.
 */
QString ChimeSdkMessagingRequest::actionString() const
{
    return ChimeSdkMessagingRequestPrivate::toString(action());
}

/*!
 * Returns the ChimeSdkMessaging API version implemented by this request.
 */
QString ChimeSdkMessagingRequest::apiVersion() const
{
    Q_D(const ChimeSdkMessagingRequest);
    return d->apiVersion;
}

/*!
 * Sets the ChimeSdkMessaging action to be performed by this request to \a action.
 */
void ChimeSdkMessagingRequest::setAction(const Action action)
{
    Q_D(ChimeSdkMessagingRequest);
    d->action = action;
}

/*!
 * Sets the ChimeSdkMessaging API version to include in this request to \a version.
 */
void ChimeSdkMessagingRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeSdkMessagingRequest);
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
bool ChimeSdkMessagingRequest::operator==(const ChimeSdkMessagingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ChimeSdkMessaging queue name.
 *
 * @par From ChimeSdkMessaging FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ChimeSdkMessaging queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeSdkMessagingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeSdkMessagingRequest::clearParameter(const QString &name)
{
    Q_D(ChimeSdkMessagingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeSdkMessagingRequest::clearParameters()
{
    Q_D(ChimeSdkMessagingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeSdkMessagingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeSdkMessagingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeSdkMessagingRequest::parameters() const
{
    Q_D(const ChimeSdkMessagingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeSdkMessagingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeSdkMessagingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeSdkMessagingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeSdkMessagingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ChimeSdkMessaging request using the given
 * \a endpoint.
 *
 * This ChimeSdkMessaging implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeSdkMessagingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeSdkMessagingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ChimeSdkMessagingRequestPrivate
 * \brief The ChimeSdkMessagingRequestPrivate class provides private implementation for ChimeSdkMessagingRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChimeSdkMessagingRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ChimeSdkMessagingRequestPrivate::ChimeSdkMessagingRequestPrivate(const ChimeSdkMessagingRequest::Action action, ChimeSdkMessagingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-05-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeSdkMessagingRequest class's copy constructor.
 */
ChimeSdkMessagingRequestPrivate::ChimeSdkMessagingRequestPrivate(const ChimeSdkMessagingRequestPrivate &other,
                                     ChimeSdkMessagingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeSdkMessagingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ChimeSdkMessaging service's Action
 * query parameters.
 */
QString ChimeSdkMessagingRequestPrivate::toString(const ChimeSdkMessagingRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeSdkMessagingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateChannelFlow);
        ActionToString(BatchCreateChannelMembership);
        ActionToString(ChannelFlowCallback);
        ActionToString(CreateChannel);
        ActionToString(CreateChannelBan);
        ActionToString(CreateChannelFlow);
        ActionToString(CreateChannelMembership);
        ActionToString(CreateChannelModerator);
        ActionToString(DeleteChannel);
        ActionToString(DeleteChannelBan);
        ActionToString(DeleteChannelFlow);
        ActionToString(DeleteChannelMembership);
        ActionToString(DeleteChannelMessage);
        ActionToString(DeleteChannelModerator);
        ActionToString(DescribeChannel);
        ActionToString(DescribeChannelBan);
        ActionToString(DescribeChannelFlow);
        ActionToString(DescribeChannelMembership);
        ActionToString(DescribeChannelMembershipForAppInstanceUser);
        ActionToString(DescribeChannelModeratedByAppInstanceUser);
        ActionToString(DescribeChannelModerator);
        ActionToString(DisassociateChannelFlow);
        ActionToString(GetChannelMembershipPreferences);
        ActionToString(GetChannelMessage);
        ActionToString(GetChannelMessageStatus);
        ActionToString(GetMessagingSessionEndpoint);
        ActionToString(ListChannelBans);
        ActionToString(ListChannelFlows);
        ActionToString(ListChannelMemberships);
        ActionToString(ListChannelMembershipsForAppInstanceUser);
        ActionToString(ListChannelMessages);
        ActionToString(ListChannelModerators);
        ActionToString(ListChannels);
        ActionToString(ListChannelsAssociatedWithChannelFlow);
        ActionToString(ListChannelsModeratedByAppInstanceUser);
        ActionToString(ListSubChannels);
        ActionToString(ListTagsForResource);
        ActionToString(PutChannelMembershipPreferences);
        ActionToString(RedactChannelMessage);
        ActionToString(SearchChannels);
        ActionToString(SendChannelMessage);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateChannel);
        ActionToString(UpdateChannelFlow);
        ActionToString(UpdateChannelMessage);
        ActionToString(UpdateChannelReadMarker);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
