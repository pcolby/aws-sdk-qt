// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIATAILORCLIENT_H
#define QTAWS_MEDIATAILORCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediatailorglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaTailor {

class MediaTailorClientPrivate;
class ConfigureLogsForPlaybackConfigurationRequest;
class ConfigureLogsForPlaybackConfigurationResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateLiveSourceRequest;
class CreateLiveSourceResponse;
class CreatePrefetchScheduleRequest;
class CreatePrefetchScheduleResponse;
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
class DeleteLiveSourceRequest;
class DeleteLiveSourceResponse;
class DeletePlaybackConfigurationRequest;
class DeletePlaybackConfigurationResponse;
class DeletePrefetchScheduleRequest;
class DeletePrefetchScheduleResponse;
class DeleteProgramRequest;
class DeleteProgramResponse;
class DeleteSourceLocationRequest;
class DeleteSourceLocationResponse;
class DeleteVodSourceRequest;
class DeleteVodSourceResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeLiveSourceRequest;
class DescribeLiveSourceResponse;
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
class GetPrefetchScheduleRequest;
class GetPrefetchScheduleResponse;
class ListAlertsRequest;
class ListAlertsResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListLiveSourcesRequest;
class ListLiveSourcesResponse;
class ListPlaybackConfigurationsRequest;
class ListPlaybackConfigurationsResponse;
class ListPrefetchSchedulesRequest;
class ListPrefetchSchedulesResponse;
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
class UpdateLiveSourceRequest;
class UpdateLiveSourceResponse;
class UpdateSourceLocationRequest;
class UpdateSourceLocationResponse;
class UpdateVodSourceRequest;
class UpdateVodSourceResponse;

class QTAWSMEDIATAILOR_EXPORT MediaTailorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaTailorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaTailorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ConfigureLogsForPlaybackConfigurationResponse * configureLogsForPlaybackConfiguration(const ConfigureLogsForPlaybackConfigurationRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateLiveSourceResponse * createLiveSource(const CreateLiveSourceRequest &request);
    CreatePrefetchScheduleResponse * createPrefetchSchedule(const CreatePrefetchScheduleRequest &request);
    CreateProgramResponse * createProgram(const CreateProgramRequest &request);
    CreateSourceLocationResponse * createSourceLocation(const CreateSourceLocationRequest &request);
    CreateVodSourceResponse * createVodSource(const CreateVodSourceRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteChannelPolicyResponse * deleteChannelPolicy(const DeleteChannelPolicyRequest &request);
    DeleteLiveSourceResponse * deleteLiveSource(const DeleteLiveSourceRequest &request);
    DeletePlaybackConfigurationResponse * deletePlaybackConfiguration(const DeletePlaybackConfigurationRequest &request);
    DeletePrefetchScheduleResponse * deletePrefetchSchedule(const DeletePrefetchScheduleRequest &request);
    DeleteProgramResponse * deleteProgram(const DeleteProgramRequest &request);
    DeleteSourceLocationResponse * deleteSourceLocation(const DeleteSourceLocationRequest &request);
    DeleteVodSourceResponse * deleteVodSource(const DeleteVodSourceRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeLiveSourceResponse * describeLiveSource(const DescribeLiveSourceRequest &request);
    DescribeProgramResponse * describeProgram(const DescribeProgramRequest &request);
    DescribeSourceLocationResponse * describeSourceLocation(const DescribeSourceLocationRequest &request);
    DescribeVodSourceResponse * describeVodSource(const DescribeVodSourceRequest &request);
    GetChannelPolicyResponse * getChannelPolicy(const GetChannelPolicyRequest &request);
    GetChannelScheduleResponse * getChannelSchedule(const GetChannelScheduleRequest &request);
    GetPlaybackConfigurationResponse * getPlaybackConfiguration(const GetPlaybackConfigurationRequest &request);
    GetPrefetchScheduleResponse * getPrefetchSchedule(const GetPrefetchScheduleRequest &request);
    ListAlertsResponse * listAlerts(const ListAlertsRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListLiveSourcesResponse * listLiveSources(const ListLiveSourcesRequest &request);
    ListPlaybackConfigurationsResponse * listPlaybackConfigurations(const ListPlaybackConfigurationsRequest &request);
    ListPrefetchSchedulesResponse * listPrefetchSchedules(const ListPrefetchSchedulesRequest &request);
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
    UpdateLiveSourceResponse * updateLiveSource(const UpdateLiveSourceRequest &request);
    UpdateSourceLocationResponse * updateSourceLocation(const UpdateSourceLocationRequest &request);
    UpdateVodSourceResponse * updateVodSource(const UpdateVodSourceRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaTailorClient)
    Q_DISABLE_COPY(MediaTailorClient)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
