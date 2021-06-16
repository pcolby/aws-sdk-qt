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

#ifndef QTAWS_MEDIATAILORCLIENT_H
#define QTAWS_MEDIATAILORCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MediaTailor {

class MediaTailorClientPrivate;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateProgramRequest;
class CreateProgramResponse;
class CreateSourceLocationRequest;
class CreateSourceLocationResponse;
class CreateVodSourceRequest;
class CreateVodSourceResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteChannelPolicyRequest;
class DeleteChannelPolicyResponse;
class DeletePlaybackConfigurationRequest;
class DeletePlaybackConfigurationResponse;
class DeleteProgramRequest;
class DeleteProgramResponse;
class DeleteSourceLocationRequest;
class DeleteSourceLocationResponse;
class DeleteVodSourceRequest;
class DeleteVodSourceResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeProgramRequest;
class DescribeProgramResponse;
class DescribeSourceLocationRequest;
class DescribeSourceLocationResponse;
class DescribeVodSourceRequest;
class DescribeVodSourceResponse;
class GetChannelPolicyRequest;
class GetChannelPolicyResponse;
class GetChannelScheduleRequest;
class GetChannelScheduleResponse;
class GetPlaybackConfigurationRequest;
class GetPlaybackConfigurationResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListPlaybackConfigurationsRequest;
class ListPlaybackConfigurationsResponse;
class ListSourceLocationsRequest;
class ListSourceLocationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListVodSourcesRequest;
class ListVodSourcesResponse;
class PutChannelPolicyRequest;
class PutChannelPolicyResponse;
class PutPlaybackConfigurationRequest;
class PutPlaybackConfigurationResponse;
class StartChannelRequest;
class StartChannelResponse;
class StopChannelRequest;
class StopChannelResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateSourceLocationRequest;
class UpdateSourceLocationResponse;
class UpdateVodSourceRequest;
class UpdateVodSourceResponse;

class QTAWS_EXPORT MediaTailorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaTailorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaTailorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateProgramResponse * createProgram(const CreateProgramRequest &request);
    CreateSourceLocationResponse * createSourceLocation(const CreateSourceLocationRequest &request);
    CreateVodSourceResponse * createVodSource(const CreateVodSourceRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteChannelPolicyResponse * deleteChannelPolicy(const DeleteChannelPolicyRequest &request);
    DeletePlaybackConfigurationResponse * deletePlaybackConfiguration(const DeletePlaybackConfigurationRequest &request);
    DeleteProgramResponse * deleteProgram(const DeleteProgramRequest &request);
    DeleteSourceLocationResponse * deleteSourceLocation(const DeleteSourceLocationRequest &request);
    DeleteVodSourceResponse * deleteVodSource(const DeleteVodSourceRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeProgramResponse * describeProgram(const DescribeProgramRequest &request);
    DescribeSourceLocationResponse * describeSourceLocation(const DescribeSourceLocationRequest &request);
    DescribeVodSourceResponse * describeVodSource(const DescribeVodSourceRequest &request);
    GetChannelPolicyResponse * getChannelPolicy(const GetChannelPolicyRequest &request);
    GetChannelScheduleResponse * getChannelSchedule(const GetChannelScheduleRequest &request);
    GetPlaybackConfigurationResponse * getPlaybackConfiguration(const GetPlaybackConfigurationRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListPlaybackConfigurationsResponse * listPlaybackConfigurations(const ListPlaybackConfigurationsRequest &request);
    ListSourceLocationsResponse * listSourceLocations(const ListSourceLocationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListVodSourcesResponse * listVodSources(const ListVodSourcesRequest &request);
    PutChannelPolicyResponse * putChannelPolicy(const PutChannelPolicyRequest &request);
    PutPlaybackConfigurationResponse * putPlaybackConfiguration(const PutPlaybackConfigurationRequest &request);
    StartChannelResponse * startChannel(const StartChannelRequest &request);
    StopChannelResponse * stopChannel(const StopChannelRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateSourceLocationResponse * updateSourceLocation(const UpdateSourceLocationRequest &request);
    UpdateVodSourceResponse * updateVodSource(const UpdateVodSourceRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaTailorClient)
    Q_DISABLE_COPY(MediaTailorClient)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
