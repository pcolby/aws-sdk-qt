/*
    Copyright 2013-2020 Paul Colby

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

#include "groundstationclient.h"
#include "groundstationclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelcontactrequest.h"
#include "cancelcontactresponse.h"
#include "createconfigrequest.h"
#include "createconfigresponse.h"
#include "createdataflowendpointgrouprequest.h"
#include "createdataflowendpointgroupresponse.h"
#include "createmissionprofilerequest.h"
#include "createmissionprofileresponse.h"
#include "deleteconfigrequest.h"
#include "deleteconfigresponse.h"
#include "deletedataflowendpointgrouprequest.h"
#include "deletedataflowendpointgroupresponse.h"
#include "deletemissionprofilerequest.h"
#include "deletemissionprofileresponse.h"
#include "describecontactrequest.h"
#include "describecontactresponse.h"
#include "getconfigrequest.h"
#include "getconfigresponse.h"
#include "getdataflowendpointgrouprequest.h"
#include "getdataflowendpointgroupresponse.h"
#include "getminuteusagerequest.h"
#include "getminuteusageresponse.h"
#include "getmissionprofilerequest.h"
#include "getmissionprofileresponse.h"
#include "getsatelliterequest.h"
#include "getsatelliteresponse.h"
#include "listconfigsrequest.h"
#include "listconfigsresponse.h"
#include "listcontactsrequest.h"
#include "listcontactsresponse.h"
#include "listdataflowendpointgroupsrequest.h"
#include "listdataflowendpointgroupsresponse.h"
#include "listgroundstationsrequest.h"
#include "listgroundstationsresponse.h"
#include "listmissionprofilesrequest.h"
#include "listmissionprofilesresponse.h"
#include "listsatellitesrequest.h"
#include "listsatellitesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "reservecontactrequest.h"
#include "reservecontactresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconfigrequest.h"
#include "updateconfigresponse.h"
#include "updatemissionprofilerequest.h"
#include "updatemissionprofileresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GroundStation
 * \brief Contains classess for accessing AWS Ground Station.
 *
 * \inmodule QtAwsGroundStation
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GroundStationClient
 * \brief The GroundStationClient class provides access to the AWS Ground Station service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 */

/*!
 * \brief Constructs a GroundStationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GroundStationClient::GroundStationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GroundStationClientPrivate(this), parent)
{
    Q_D(GroundStationClient);
    d->apiVersion = QStringLiteral("2019-05-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("groundstation");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Ground Station");
    d->serviceName = QStringLiteral("groundstation");
}

/*!
 * \overload GroundStationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GroundStationClient::GroundStationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GroundStationClientPrivate(this), parent)
{
    Q_D(GroundStationClient);
    d->apiVersion = QStringLiteral("2019-05-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("groundstation");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Ground Station");
    d->serviceName = QStringLiteral("groundstation");
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * CancelContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a contact with a specified contact
 */
CancelContactResponse * GroundStationClient::cancelContact(const CancelContactRequest &request)
{
    return qobject_cast<CancelContactResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * CreateConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>Config</code> with the specified <code>configData</code>
 *
 * parameters>
 *
 * Only one type of <code>configData</code> can be
 */
CreateConfigResponse * GroundStationClient::createConfig(const CreateConfigRequest &request)
{
    return qobject_cast<CreateConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * CreateDataflowEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DataflowEndpoint</code> group containing the specified list of <code>DataflowEndpoint</code>
 *
 * objects>
 *
 * The <code>name</code> field in each endpoint is used in your mission profile <code>DataflowEndpointConfig</code> to
 * specify which endpoints to use during a
 *
 * contact>
 *
 * When a contact uses multiple <code>DataflowEndpointConfig</code> objects, each <code>Config</code> must match a
 * <code>DataflowEndpoint</code> in the same
 */
CreateDataflowEndpointGroupResponse * GroundStationClient::createDataflowEndpointGroup(const CreateDataflowEndpointGroupRequest &request)
{
    return qobject_cast<CreateDataflowEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * CreateMissionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a mission
 *
 * profile>
 *
 * <code>dataflowEdges</code> is a list of lists of strings. Each lower level list of strings has two elements: a <i>from
 * ARN</i> and a <i>to
 */
CreateMissionProfileResponse * GroundStationClient::createMissionProfile(const CreateMissionProfileRequest &request)
{
    return qobject_cast<CreateMissionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * DeleteConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteConfigResponse * GroundStationClient::deleteConfig(const DeleteConfigRequest &request)
{
    return qobject_cast<DeleteConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * DeleteDataflowEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataflow endpoint
 */
DeleteDataflowEndpointGroupResponse * GroundStationClient::deleteDataflowEndpointGroup(const DeleteDataflowEndpointGroupRequest &request)
{
    return qobject_cast<DeleteDataflowEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * DeleteMissionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a mission
 */
DeleteMissionProfileResponse * GroundStationClient::deleteMissionProfile(const DeleteMissionProfileRequest &request)
{
    return qobject_cast<DeleteMissionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * DescribeContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing
 */
DescribeContactResponse * GroundStationClient::describeContact(const DescribeContactRequest &request)
{
    return qobject_cast<DescribeContactResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * GetConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns <code>Config</code>
 *
 * information>
 *
 * Only one <code>Config</code> response can be
 */
GetConfigResponse * GroundStationClient::getConfig(const GetConfigRequest &request)
{
    return qobject_cast<GetConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * GetDataflowEndpointGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the dataflow endpoint
 */
GetDataflowEndpointGroupResponse * GroundStationClient::getDataflowEndpointGroup(const GetDataflowEndpointGroupRequest &request)
{
    return qobject_cast<GetDataflowEndpointGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * GetMinuteUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of minutes used by
 */
GetMinuteUsageResponse * GroundStationClient::getMinuteUsage(const GetMinuteUsageRequest &request)
{
    return qobject_cast<GetMinuteUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * GetMissionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a mission
 */
GetMissionProfileResponse * GroundStationClient::getMissionProfile(const GetMissionProfileRequest &request)
{
    return qobject_cast<GetMissionProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * GetSatelliteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a
 */
GetSatelliteResponse * GroundStationClient::getSatellite(const GetSatelliteRequest &request)
{
    return qobject_cast<GetSatelliteResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>Config</code>
 */
ListConfigsResponse * GroundStationClient::listConfigs(const ListConfigsRequest &request)
{
    return qobject_cast<ListConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListContactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 *
 * contacts>
 *
 * If <code>statusList</code> contains AVAILABLE, the request must include <code>groundstation</code>,
 * <code>missionprofileArn</code>, and <code>satelliteArn</code>.
 */
ListContactsResponse * GroundStationClient::listContacts(const ListContactsRequest &request)
{
    return qobject_cast<ListContactsResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListDataflowEndpointGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DataflowEndpoint</code>
 */
ListDataflowEndpointGroupsResponse * GroundStationClient::listDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest &request)
{
    return qobject_cast<ListDataflowEndpointGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListGroundStationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of ground stations.
 */
ListGroundStationsResponse * GroundStationClient::listGroundStations(const ListGroundStationsRequest &request)
{
    return qobject_cast<ListGroundStationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListMissionProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of mission
 */
ListMissionProfilesResponse * GroundStationClient::listMissionProfiles(const ListMissionProfilesRequest &request)
{
    return qobject_cast<ListMissionProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListSatellitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListSatellitesResponse * GroundStationClient::listSatellites(const ListSatellitesRequest &request)
{
    return qobject_cast<ListSatellitesResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags or a specified
 */
ListTagsForResourceResponse * GroundStationClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * ReserveContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reserves a contact using specified
 */
ReserveContactResponse * GroundStationClient::reserveContact(const ReserveContactRequest &request)
{
    return qobject_cast<ReserveContactResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a tag to a
 */
TagResourceResponse * GroundStationClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deassigns a resource
 */
UntagResourceResponse * GroundStationClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * UpdateConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>Config</code> used when scheduling
 *
 * contacts>
 *
 * Updating a <code>Config</code> will not update the execution parameters for existing future contacts scheduled with this
 */
UpdateConfigResponse * GroundStationClient::updateConfig(const UpdateConfigRequest &request)
{
    return qobject_cast<UpdateConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the GroundStationClient service, and returns a pointer to an
 * UpdateMissionProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a mission
 *
 * profile>
 *
 * Updating a mission profile will not update the execution parameters for existing future
 */
UpdateMissionProfileResponse * GroundStationClient::updateMissionProfile(const UpdateMissionProfileRequest &request)
{
    return qobject_cast<UpdateMissionProfileResponse *>(send(request));
}

/*!
 * \class QtAws::GroundStation::GroundStationClientPrivate
 * \brief The GroundStationClientPrivate class provides private implementation for GroundStationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationClientPrivate object with public implementation \a q.
 */
GroundStationClientPrivate::GroundStationClientPrivate(GroundStationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GroundStation
} // namespace QtAws
