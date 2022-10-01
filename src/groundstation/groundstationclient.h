// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUNDSTATIONCLIENT_H
#define QTAWS_GROUNDSTATIONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgroundstationglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GroundStation {

class GroundStationClientPrivate;
class CancelContactRequest;
class CancelContactResponse;
class CreateConfigRequest;
class CreateConfigResponse;
class CreateDataflowEndpointGroupRequest;
class CreateDataflowEndpointGroupResponse;
class CreateMissionProfileRequest;
class CreateMissionProfileResponse;
class DeleteConfigRequest;
class DeleteConfigResponse;
class DeleteDataflowEndpointGroupRequest;
class DeleteDataflowEndpointGroupResponse;
class DeleteMissionProfileRequest;
class DeleteMissionProfileResponse;
class DescribeContactRequest;
class DescribeContactResponse;
class GetConfigRequest;
class GetConfigResponse;
class GetDataflowEndpointGroupRequest;
class GetDataflowEndpointGroupResponse;
class GetMinuteUsageRequest;
class GetMinuteUsageResponse;
class GetMissionProfileRequest;
class GetMissionProfileResponse;
class GetSatelliteRequest;
class GetSatelliteResponse;
class ListConfigsRequest;
class ListConfigsResponse;
class ListContactsRequest;
class ListContactsResponse;
class ListDataflowEndpointGroupsRequest;
class ListDataflowEndpointGroupsResponse;
class ListGroundStationsRequest;
class ListGroundStationsResponse;
class ListMissionProfilesRequest;
class ListMissionProfilesResponse;
class ListSatellitesRequest;
class ListSatellitesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ReserveContactRequest;
class ReserveContactResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConfigRequest;
class UpdateConfigResponse;
class UpdateMissionProfileRequest;
class UpdateMissionProfileResponse;

class QTAWSGROUNDSTATION_EXPORT GroundStationClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GroundStationClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GroundStationClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelContactResponse * cancelContact(const CancelContactRequest &request);
    CreateConfigResponse * createConfig(const CreateConfigRequest &request);
    CreateDataflowEndpointGroupResponse * createDataflowEndpointGroup(const CreateDataflowEndpointGroupRequest &request);
    CreateMissionProfileResponse * createMissionProfile(const CreateMissionProfileRequest &request);
    DeleteConfigResponse * deleteConfig(const DeleteConfigRequest &request);
    DeleteDataflowEndpointGroupResponse * deleteDataflowEndpointGroup(const DeleteDataflowEndpointGroupRequest &request);
    DeleteMissionProfileResponse * deleteMissionProfile(const DeleteMissionProfileRequest &request);
    DescribeContactResponse * describeContact(const DescribeContactRequest &request);
    GetConfigResponse * getConfig(const GetConfigRequest &request);
    GetDataflowEndpointGroupResponse * getDataflowEndpointGroup(const GetDataflowEndpointGroupRequest &request);
    GetMinuteUsageResponse * getMinuteUsage(const GetMinuteUsageRequest &request);
    GetMissionProfileResponse * getMissionProfile(const GetMissionProfileRequest &request);
    GetSatelliteResponse * getSatellite(const GetSatelliteRequest &request);
    ListConfigsResponse * listConfigs(const ListConfigsRequest &request);
    ListContactsResponse * listContacts(const ListContactsRequest &request);
    ListDataflowEndpointGroupsResponse * listDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest &request);
    ListGroundStationsResponse * listGroundStations(const ListGroundStationsRequest &request);
    ListMissionProfilesResponse * listMissionProfiles(const ListMissionProfilesRequest &request);
    ListSatellitesResponse * listSatellites(const ListSatellitesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ReserveContactResponse * reserveContact(const ReserveContactRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConfigResponse * updateConfig(const UpdateConfigRequest &request);
    UpdateMissionProfileResponse * updateMissionProfile(const UpdateMissionProfileRequest &request);

private:
    Q_DECLARE_PRIVATE(GroundStationClient)
    Q_DISABLE_COPY(GroundStationClient)

};

} // namespace GroundStation
} // namespace QtAws

#endif
