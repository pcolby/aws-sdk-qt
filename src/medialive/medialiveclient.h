/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIALIVECLIENT_H
#define QTAWS_MEDIALIVECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MediaLive {

class MediaLiveClientPrivate;
class CreateChannelResponse;
class CreateInputResponse;
class CreateInputSecurityGroupResponse;
class DeleteChannelResponse;
class DeleteInputResponse;
class DeleteInputSecurityGroupResponse;
class DescribeChannelResponse;
class DescribeInputResponse;
class DescribeInputSecurityGroupResponse;
class ListChannelsResponse;
class ListInputSecurityGroupsResponse;
class ListInputsResponse;
class StartChannelResponse;
class StopChannelResponse;
class UpdateChannelResponse;

class QTAWS_EXPORT MediaLiveClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MediaLiveClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaLiveClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateInputResponse * createInput(const CreateInputRequest &request);
    CreateInputSecurityGroupResponse * createInputSecurityGroup(const CreateInputSecurityGroupRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteInputResponse * deleteInput(const DeleteInputRequest &request);
    DeleteInputSecurityGroupResponse * deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeInputResponse * describeInput(const DescribeInputRequest &request);
    DescribeInputSecurityGroupResponse * describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListInputSecurityGroupsResponse * listInputSecurityGroups(const ListInputSecurityGroupsRequest &request);
    ListInputsResponse * listInputs(const ListInputsRequest &request);
    StartChannelResponse * startChannel(const StartChannelRequest &request);
    StopChannelResponse * stopChannel(const StopChannelRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaLiveClient)
    Q_DISABLE_COPY(MediaLiveClient)

};

} // namespace MediaLive
} // namespace AWS

#endif
