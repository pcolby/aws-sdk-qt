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

#ifndef QTAWS_CHIMESDKMESSAGINGREQUEST_H
#define QTAWS_CHIMESDKMESSAGINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawschimesdkmessagingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ChimeSdkMessagingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ChimeSdkMessaging.
    enum Action {
        AssociateChannelFlowAction,
        BatchCreateChannelMembershipAction,
        ChannelFlowCallbackAction,
        CreateChannelAction,
        CreateChannelBanAction,
        CreateChannelFlowAction,
        CreateChannelMembershipAction,
        CreateChannelModeratorAction,
        DeleteChannelAction,
        DeleteChannelBanAction,
        DeleteChannelFlowAction,
        DeleteChannelMembershipAction,
        DeleteChannelMessageAction,
        DeleteChannelModeratorAction,
        DescribeChannelAction,
        DescribeChannelBanAction,
        DescribeChannelFlowAction,
        DescribeChannelMembershipAction,
        DescribeChannelMembershipForAppInstanceUserAction,
        DescribeChannelModeratedByAppInstanceUserAction,
        DescribeChannelModeratorAction,
        DisassociateChannelFlowAction,
        GetChannelMembershipPreferencesAction,
        GetChannelMessageAction,
        GetChannelMessageStatusAction,
        GetMessagingSessionEndpointAction,
        ListChannelBansAction,
        ListChannelFlowsAction,
        ListChannelMembershipsAction,
        ListChannelMembershipsForAppInstanceUserAction,
        ListChannelMessagesAction,
        ListChannelModeratorsAction,
        ListChannelsAction,
        ListChannelsAssociatedWithChannelFlowAction,
        ListChannelsModeratedByAppInstanceUserAction,
        ListSubChannelsAction,
        ListTagsForResourceAction,
        PutChannelMembershipPreferencesAction,
        RedactChannelMessageAction,
        SearchChannelsAction,
        SendChannelMessageAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateChannelAction,
        UpdateChannelFlowAction,
        UpdateChannelMessageAction,
        UpdateChannelReadMarkerAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ChimeSdkMessagingRequest(const Action action);
    ChimeSdkMessagingRequest(const ChimeSdkMessagingRequest &other);
    ChimeSdkMessagingRequest &operator=(const ChimeSdkMessagingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ChimeSdkMessagingRequest &other) const;


protected:
    /// @cond internal
    explicit ChimeSdkMessagingRequest(ChimeSdkMessagingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkMessagingRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
