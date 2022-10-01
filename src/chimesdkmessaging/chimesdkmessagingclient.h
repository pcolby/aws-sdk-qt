// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMESSAGINGCLIENT_H
#define QTAWS_CHIMESDKMESSAGINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawschimesdkmessagingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingClientPrivate;
class AssociateChannelFlowRequest;
class AssociateChannelFlowResponse;
class BatchCreateChannelMembershipRequest;
class BatchCreateChannelMembershipResponse;
class ChannelFlowCallbackRequest;
class ChannelFlowCallbackResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateChannelBanRequest;
class CreateChannelBanResponse;
class CreateChannelFlowRequest;
class CreateChannelFlowResponse;
class CreateChannelMembershipRequest;
class CreateChannelMembershipResponse;
class CreateChannelModeratorRequest;
class CreateChannelModeratorResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteChannelBanRequest;
class DeleteChannelBanResponse;
class DeleteChannelFlowRequest;
class DeleteChannelFlowResponse;
class DeleteChannelMembershipRequest;
class DeleteChannelMembershipResponse;
class DeleteChannelMessageRequest;
class DeleteChannelMessageResponse;
class DeleteChannelModeratorRequest;
class DeleteChannelModeratorResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeChannelBanRequest;
class DescribeChannelBanResponse;
class DescribeChannelFlowRequest;
class DescribeChannelFlowResponse;
class DescribeChannelMembershipRequest;
class DescribeChannelMembershipResponse;
class DescribeChannelMembershipForAppInstanceUserRequest;
class DescribeChannelMembershipForAppInstanceUserResponse;
class DescribeChannelModeratedByAppInstanceUserRequest;
class DescribeChannelModeratedByAppInstanceUserResponse;
class DescribeChannelModeratorRequest;
class DescribeChannelModeratorResponse;
class DisassociateChannelFlowRequest;
class DisassociateChannelFlowResponse;
class GetChannelMembershipPreferencesRequest;
class GetChannelMembershipPreferencesResponse;
class GetChannelMessageRequest;
class GetChannelMessageResponse;
class GetChannelMessageStatusRequest;
class GetChannelMessageStatusResponse;
class GetMessagingSessionEndpointRequest;
class GetMessagingSessionEndpointResponse;
class ListChannelBansRequest;
class ListChannelBansResponse;
class ListChannelFlowsRequest;
class ListChannelFlowsResponse;
class ListChannelMembershipsRequest;
class ListChannelMembershipsResponse;
class ListChannelMembershipsForAppInstanceUserRequest;
class ListChannelMembershipsForAppInstanceUserResponse;
class ListChannelMessagesRequest;
class ListChannelMessagesResponse;
class ListChannelModeratorsRequest;
class ListChannelModeratorsResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListChannelsAssociatedWithChannelFlowRequest;
class ListChannelsAssociatedWithChannelFlowResponse;
class ListChannelsModeratedByAppInstanceUserRequest;
class ListChannelsModeratedByAppInstanceUserResponse;
class ListSubChannelsRequest;
class ListSubChannelsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutChannelMembershipPreferencesRequest;
class PutChannelMembershipPreferencesResponse;
class RedactChannelMessageRequest;
class RedactChannelMessageResponse;
class SearchChannelsRequest;
class SearchChannelsResponse;
class SendChannelMessageRequest;
class SendChannelMessageResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateChannelFlowRequest;
class UpdateChannelFlowResponse;
class UpdateChannelMessageRequest;
class UpdateChannelMessageResponse;
class UpdateChannelReadMarkerRequest;
class UpdateChannelReadMarkerResponse;

class QTAWSCHIMESDKMESSAGING_EXPORT ChimeSdkMessagingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ChimeSdkMessagingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ChimeSdkMessagingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateChannelFlowResponse * associateChannelFlow(const AssociateChannelFlowRequest &request);
    BatchCreateChannelMembershipResponse * batchCreateChannelMembership(const BatchCreateChannelMembershipRequest &request);
    ChannelFlowCallbackResponse * channelFlowCallback(const ChannelFlowCallbackRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateChannelBanResponse * createChannelBan(const CreateChannelBanRequest &request);
    CreateChannelFlowResponse * createChannelFlow(const CreateChannelFlowRequest &request);
    CreateChannelMembershipResponse * createChannelMembership(const CreateChannelMembershipRequest &request);
    CreateChannelModeratorResponse * createChannelModerator(const CreateChannelModeratorRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteChannelBanResponse * deleteChannelBan(const DeleteChannelBanRequest &request);
    DeleteChannelFlowResponse * deleteChannelFlow(const DeleteChannelFlowRequest &request);
    DeleteChannelMembershipResponse * deleteChannelMembership(const DeleteChannelMembershipRequest &request);
    DeleteChannelMessageResponse * deleteChannelMessage(const DeleteChannelMessageRequest &request);
    DeleteChannelModeratorResponse * deleteChannelModerator(const DeleteChannelModeratorRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeChannelBanResponse * describeChannelBan(const DescribeChannelBanRequest &request);
    DescribeChannelFlowResponse * describeChannelFlow(const DescribeChannelFlowRequest &request);
    DescribeChannelMembershipResponse * describeChannelMembership(const DescribeChannelMembershipRequest &request);
    DescribeChannelMembershipForAppInstanceUserResponse * describeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest &request);
    DescribeChannelModeratedByAppInstanceUserResponse * describeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest &request);
    DescribeChannelModeratorResponse * describeChannelModerator(const DescribeChannelModeratorRequest &request);
    DisassociateChannelFlowResponse * disassociateChannelFlow(const DisassociateChannelFlowRequest &request);
    GetChannelMembershipPreferencesResponse * getChannelMembershipPreferences(const GetChannelMembershipPreferencesRequest &request);
    GetChannelMessageResponse * getChannelMessage(const GetChannelMessageRequest &request);
    GetChannelMessageStatusResponse * getChannelMessageStatus(const GetChannelMessageStatusRequest &request);
    GetMessagingSessionEndpointResponse * getMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest &request);
    ListChannelBansResponse * listChannelBans(const ListChannelBansRequest &request);
    ListChannelFlowsResponse * listChannelFlows(const ListChannelFlowsRequest &request);
    ListChannelMembershipsResponse * listChannelMemberships(const ListChannelMembershipsRequest &request);
    ListChannelMembershipsForAppInstanceUserResponse * listChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest &request);
    ListChannelMessagesResponse * listChannelMessages(const ListChannelMessagesRequest &request);
    ListChannelModeratorsResponse * listChannelModerators(const ListChannelModeratorsRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListChannelsAssociatedWithChannelFlowResponse * listChannelsAssociatedWithChannelFlow(const ListChannelsAssociatedWithChannelFlowRequest &request);
    ListChannelsModeratedByAppInstanceUserResponse * listChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest &request);
    ListSubChannelsResponse * listSubChannels(const ListSubChannelsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutChannelMembershipPreferencesResponse * putChannelMembershipPreferences(const PutChannelMembershipPreferencesRequest &request);
    RedactChannelMessageResponse * redactChannelMessage(const RedactChannelMessageRequest &request);
    SearchChannelsResponse * searchChannels(const SearchChannelsRequest &request);
    SendChannelMessageResponse * sendChannelMessage(const SendChannelMessageRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateChannelFlowResponse * updateChannelFlow(const UpdateChannelFlowRequest &request);
    UpdateChannelMessageResponse * updateChannelMessage(const UpdateChannelMessageRequest &request);
    UpdateChannelReadMarkerResponse * updateChannelReadMarker(const UpdateChannelReadMarkerRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeSdkMessagingClient)
    Q_DISABLE_COPY(ChimeSdkMessagingClient)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
