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

#include "locationserviceclient.h"
#include "locationserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "associatetrackerconsumerrequest.h"
#include "associatetrackerconsumerresponse.h"
#include "batchdeletedevicepositionhistoryrequest.h"
#include "batchdeletedevicepositionhistoryresponse.h"
#include "batchdeletegeofencerequest.h"
#include "batchdeletegeofenceresponse.h"
#include "batchevaluategeofencesrequest.h"
#include "batchevaluategeofencesresponse.h"
#include "batchgetdevicepositionrequest.h"
#include "batchgetdevicepositionresponse.h"
#include "batchputgeofencerequest.h"
#include "batchputgeofenceresponse.h"
#include "batchupdatedevicepositionrequest.h"
#include "batchupdatedevicepositionresponse.h"
#include "calculaterouterequest.h"
#include "calculaterouteresponse.h"
#include "creategeofencecollectionrequest.h"
#include "creategeofencecollectionresponse.h"
#include "createmaprequest.h"
#include "createmapresponse.h"
#include "createplaceindexrequest.h"
#include "createplaceindexresponse.h"
#include "createroutecalculatorrequest.h"
#include "createroutecalculatorresponse.h"
#include "createtrackerrequest.h"
#include "createtrackerresponse.h"
#include "deletegeofencecollectionrequest.h"
#include "deletegeofencecollectionresponse.h"
#include "deletemaprequest.h"
#include "deletemapresponse.h"
#include "deleteplaceindexrequest.h"
#include "deleteplaceindexresponse.h"
#include "deleteroutecalculatorrequest.h"
#include "deleteroutecalculatorresponse.h"
#include "deletetrackerrequest.h"
#include "deletetrackerresponse.h"
#include "describegeofencecollectionrequest.h"
#include "describegeofencecollectionresponse.h"
#include "describemaprequest.h"
#include "describemapresponse.h"
#include "describeplaceindexrequest.h"
#include "describeplaceindexresponse.h"
#include "describeroutecalculatorrequest.h"
#include "describeroutecalculatorresponse.h"
#include "describetrackerrequest.h"
#include "describetrackerresponse.h"
#include "disassociatetrackerconsumerrequest.h"
#include "disassociatetrackerconsumerresponse.h"
#include "getdevicepositionrequest.h"
#include "getdevicepositionresponse.h"
#include "getdevicepositionhistoryrequest.h"
#include "getdevicepositionhistoryresponse.h"
#include "getgeofencerequest.h"
#include "getgeofenceresponse.h"
#include "getmapglyphsrequest.h"
#include "getmapglyphsresponse.h"
#include "getmapspritesrequest.h"
#include "getmapspritesresponse.h"
#include "getmapstyledescriptorrequest.h"
#include "getmapstyledescriptorresponse.h"
#include "getmaptilerequest.h"
#include "getmaptileresponse.h"
#include "listdevicepositionsrequest.h"
#include "listdevicepositionsresponse.h"
#include "listgeofencecollectionsrequest.h"
#include "listgeofencecollectionsresponse.h"
#include "listgeofencesrequest.h"
#include "listgeofencesresponse.h"
#include "listmapsrequest.h"
#include "listmapsresponse.h"
#include "listplaceindexesrequest.h"
#include "listplaceindexesresponse.h"
#include "listroutecalculatorsrequest.h"
#include "listroutecalculatorsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtrackerconsumersrequest.h"
#include "listtrackerconsumersresponse.h"
#include "listtrackersrequest.h"
#include "listtrackersresponse.h"
#include "putgeofencerequest.h"
#include "putgeofenceresponse.h"
#include "searchplaceindexforpositionrequest.h"
#include "searchplaceindexforpositionresponse.h"
#include "searchplaceindexfortextrequest.h"
#include "searchplaceindexfortextresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LocationService
 * \brief Contains classess for accessing Amazon Location Service.
 *
 * \inmodule QtAwsLocationService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::LocationServiceClient
 * \brief The LocationServiceClient class provides access to the Amazon Location Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 */

/*!
 * \brief Constructs a LocationServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LocationServiceClient::LocationServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-19"),
    QStringLiteral("geo"),
    QStringLiteral("Amazon Location Service"),
    QStringLiteral("geo"),
    parent), d_ptr(new LocationServiceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload LocationServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LocationServiceClient::LocationServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-11-19"),
    QStringLiteral("geo"),
    QStringLiteral("Amazon Location Service"),
    QStringLiteral("geo"),
    parent), d_ptr(new LocationServiceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * AssociateTrackerConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between a geofence collection and a tracker resource. This allows the tracker resource to
 * communicate location data to the linked geofence
 *
 * collection> <note>
 *
 * Currently not supported — Cross-account configurations, such as creating associations between a tracker resource in one
 * account and a geofence collection in another
 */
AssociateTrackerConsumerResponse * LocationServiceClient::associateTrackerConsumer(const AssociateTrackerConsumerRequest &request)
{
    return qobject_cast<AssociateTrackerConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchDeleteDevicePositionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the position history of one or more devices from a tracker
 */
BatchDeleteDevicePositionHistoryResponse * LocationServiceClient::batchDeleteDevicePositionHistory(const BatchDeleteDevicePositionHistoryRequest &request)
{
    return qobject_cast<BatchDeleteDevicePositionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchDeleteGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a batch of geofences from a geofence
 *
 * collection> <note>
 *
 * This operation deletes the resource
 */
BatchDeleteGeofenceResponse * LocationServiceClient::batchDeleteGeofence(const BatchDeleteGeofenceRequest &request)
{
    return qobject_cast<BatchDeleteGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchEvaluateGeofencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Evaluates device positions against the geofence geometries from a given geofence collection. The evaluation determines
 * if the device has entered or exited a geofenced area, which publishes ENTER or EXIT geofence events to Amazon
 *
 * EventBridge> <note>
 *
 * The last geofence that a device was observed within, if any, is tracked for 30 days after the most recent device
 * position
 */
BatchEvaluateGeofencesResponse * LocationServiceClient::batchEvaluateGeofences(const BatchEvaluateGeofencesRequest &request)
{
    return qobject_cast<BatchEvaluateGeofencesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchGetDevicePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A batch request to retrieve all device
 */
BatchGetDevicePositionResponse * LocationServiceClient::batchGetDevicePosition(const BatchGetDevicePositionRequest &request)
{
    return qobject_cast<BatchGetDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchPutGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A batch request for storing geofence geometries into a given geofence collection, or updates the geometry of an existing
 * geofence if a geofence ID is included in the
 */
BatchPutGeofenceResponse * LocationServiceClient::batchPutGeofence(const BatchPutGeofenceRequest &request)
{
    return qobject_cast<BatchPutGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * BatchUpdateDevicePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads position update data for one or more devices to a tracker resource. Amazon Location uses the data when reporting
 * the last known device position and position
 *
 * history> <note>
 *
 * Only one position update is stored per sample time. Location data is sampled at a fixed rate of one position per
 * 30-second interval and retained for 30 days before it's
 */
BatchUpdateDevicePositionResponse * LocationServiceClient::batchUpdateDevicePosition(const BatchUpdateDevicePositionRequest &request)
{
    return qobject_cast<BatchUpdateDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CalculateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates a route</a> given
 * the following required parameters: <code>DeparturePostiton</code> and <code>DestinationPosition</code>. Requires that
 * you first <a
 * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create aroute
 * calculator resource</a>
 *
 * </p
 *
 * By default, a request that doesn't specify a departure time uses the best time of day to travel with the best traffic
 * conditions when calculating the
 *
 * route>
 *
 * Additional options
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#departure-time">Specifying a
 * departure time</a> using either <code>DepartureTime</code> or <code>DepartureNow</code>. This calculates a route based
 * on predictive traffic data at the given time.
 *
 * </p <note>
 *
 * You can't specify both <code>DepartureTime</code> and <code>DepartureNow</code> in a single request. Specifying both
 * parameters returns an error
 *
 * message> </note> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html#travel-mode">Specifying a
 * travel mode</a> using TravelMode. This lets you specify additional route preference such as <code>CarModeOptions</code>
 * if traveling by <code>Car</code>, or <code>TruckModeOptions</code> if traveling by
 *
 * <code>Truck</code>> </li> </ul>
 */
CalculateRouteResponse * LocationServiceClient::calculateRoute(const CalculateRouteRequest &request)
{
    return qobject_cast<CalculateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CreateGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a geofence collection, which manages and stores
 */
CreateGeofenceCollectionResponse * LocationServiceClient::createGeofenceCollection(const CreateGeofenceCollectionRequest &request)
{
    return qobject_cast<CreateGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CreateMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a map resource in your AWS account, which provides map tiles of different styles sourced from global location
 * data
 */
CreateMapResponse * LocationServiceClient::createMap(const CreateMapRequest &request)
{
    return qobject_cast<CreateMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CreatePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a place index resource in your AWS account, which supports functions with geospatial data sourced from your
 * chosen data
 */
CreatePlaceIndexResponse * LocationServiceClient::createPlaceIndex(const CreatePlaceIndexRequest &request)
{
    return qobject_cast<CreatePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CreateRouteCalculatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a route calculator resource in your AWS
 *
 * account>
 *
 * You can send requests to a route calculator resource to estimate travel time, distance, and get directions. A route
 * calculator sources traffic and road network data from your chosen data
 */
CreateRouteCalculatorResponse * LocationServiceClient::createRouteCalculator(const CreateRouteCalculatorRequest &request)
{
    return qobject_cast<CreateRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * CreateTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a tracker resource in your AWS account, which lets you retrieve current and historical location of
 */
CreateTrackerResponse * LocationServiceClient::createTracker(const CreateTrackerRequest &request)
{
    return qobject_cast<CreateTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DeleteGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a geofence collection from your AWS
 *
 * account> <note>
 *
 * This operation deletes the resource permanently. If the geofence collection is the target of a tracker resource, the
 * devices will no longer be
 */
DeleteGeofenceCollectionResponse * LocationServiceClient::deleteGeofenceCollection(const DeleteGeofenceCollectionRequest &request)
{
    return qobject_cast<DeleteGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DeleteMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a map resource from your AWS
 *
 * account> <note>
 *
 * This operation deletes the resource permanently. If the map is being used in an application, the map may not
 */
DeleteMapResponse * LocationServiceClient::deleteMap(const DeleteMapRequest &request)
{
    return qobject_cast<DeleteMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DeletePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a place index resource from your AWS
 *
 * account> <note>
 *
 * This operation deletes the resource
 */
DeletePlaceIndexResponse * LocationServiceClient::deletePlaceIndex(const DeletePlaceIndexRequest &request)
{
    return qobject_cast<DeletePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DeleteRouteCalculatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a route calculator resource from your AWS
 *
 * account> <note>
 *
 * This operation deletes the resource
 */
DeleteRouteCalculatorResponse * LocationServiceClient::deleteRouteCalculator(const DeleteRouteCalculatorRequest &request)
{
    return qobject_cast<DeleteRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DeleteTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a tracker resource from your AWS
 *
 * account> <note>
 *
 * This operation deletes the resource permanently. If the tracker resource is in use, you may encounter an error. Make
 * sure that the target resource isn't a dependency for your
 */
DeleteTrackerResponse * LocationServiceClient::deleteTracker(const DeleteTrackerRequest &request)
{
    return qobject_cast<DeleteTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DescribeGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the geofence collection
 */
DescribeGeofenceCollectionResponse * LocationServiceClient::describeGeofenceCollection(const DescribeGeofenceCollectionRequest &request)
{
    return qobject_cast<DescribeGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DescribeMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the map resource
 */
DescribeMapResponse * LocationServiceClient::describeMap(const DescribeMapRequest &request)
{
    return qobject_cast<DescribeMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DescribePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the place index resource
 */
DescribePlaceIndexResponse * LocationServiceClient::describePlaceIndex(const DescribePlaceIndexRequest &request)
{
    return qobject_cast<DescribePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DescribeRouteCalculatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the route calculator resource
 */
DescribeRouteCalculatorResponse * LocationServiceClient::describeRouteCalculator(const DescribeRouteCalculatorRequest &request)
{
    return qobject_cast<DescribeRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DescribeTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the tracker resource
 */
DescribeTrackerResponse * LocationServiceClient::describeTracker(const DescribeTrackerRequest &request)
{
    return qobject_cast<DescribeTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * DisassociateTrackerConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between a tracker resource and a geofence
 *
 * collection> <note>
 *
 * Once you unlink a tracker resource from a geofence collection, the tracker positions will no longer be automatically
 * evaluated against
 */
DisassociateTrackerConsumerResponse * LocationServiceClient::disassociateTrackerConsumer(const DisassociateTrackerConsumerRequest &request)
{
    return qobject_cast<DisassociateTrackerConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetDevicePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a device's most recent position according to its sample
 *
 * time> <note>
 *
 * Device positions are deleted after 30
 */
GetDevicePositionResponse * LocationServiceClient::getDevicePosition(const GetDevicePositionRequest &request)
{
    return qobject_cast<GetDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetDevicePositionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the device position history from a tracker resource within a specified range of
 *
 * time> <note>
 *
 * Device positions are deleted after 30
 */
GetDevicePositionHistoryResponse * LocationServiceClient::getDevicePositionHistory(const GetDevicePositionHistoryRequest &request)
{
    return qobject_cast<GetDevicePositionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the geofence details from a geofence
 */
GetGeofenceResponse * LocationServiceClient::getGeofence(const GetGeofenceRequest &request)
{
    return qobject_cast<GetGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetMapGlyphsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves glyphs used to display labels on a
 */
GetMapGlyphsResponse * LocationServiceClient::getMapGlyphs(const GetMapGlyphsRequest &request)
{
    return qobject_cast<GetMapGlyphsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetMapSpritesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the sprite sheet corresponding to a map resource. The sprite sheet is a PNG image paired with a JSON document
 * describing the offsets of individual icons that will be displayed on a rendered
 */
GetMapSpritesResponse * LocationServiceClient::getMapSprites(const GetMapSpritesRequest &request)
{
    return qobject_cast<GetMapSpritesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetMapStyleDescriptorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the map style descriptor from a map resource.
 *
 * </p
 *
 * The style descriptor contains speciﬁcations on how features render on a map. For example, what data to display, what
 * order to display the data in, and the style for the data. Style descriptors follow the Mapbox Style
 */
GetMapStyleDescriptorResponse * LocationServiceClient::getMapStyleDescriptor(const GetMapStyleDescriptorRequest &request)
{
    return qobject_cast<GetMapStyleDescriptorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * GetMapTileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a vector data tile from the map resource. Map tiles are used by clients to render a map. they're addressed
 * using a grid arrangement with an X coordinate, Y coordinate, and Z (zoom) level.
 *
 * </p
 *
 * The origin (0, 0) is the top left of the map. Increasing the zoom level by 1 doubles both the X and Y dimensions, so a
 * tile containing data for the entire world at (0/0/0) will be split into 4 tiles at zoom 1 (1/0/0, 1/0/1, 1/1/0,
 */
GetMapTileResponse * LocationServiceClient::getMapTile(const GetMapTileRequest &request)
{
    return qobject_cast<GetMapTileResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListDevicePositionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the latest device positions for requested
 */
ListDevicePositionsResponse * LocationServiceClient::listDevicePositions(const ListDevicePositionsRequest &request)
{
    return qobject_cast<ListDevicePositionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListGeofenceCollectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofence collections in your AWS
 */
ListGeofenceCollectionsResponse * LocationServiceClient::listGeofenceCollections(const ListGeofenceCollectionsRequest &request)
{
    return qobject_cast<ListGeofenceCollectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListGeofencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofences stored in a given geofence
 */
ListGeofencesResponse * LocationServiceClient::listGeofences(const ListGeofencesRequest &request)
{
    return qobject_cast<ListGeofencesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListMapsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists map resources in your AWS
 */
ListMapsResponse * LocationServiceClient::listMaps(const ListMapsRequest &request)
{
    return qobject_cast<ListMapsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListPlaceIndexesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists place index resources in your AWS
 */
ListPlaceIndexesResponse * LocationServiceClient::listPlaceIndexes(const ListPlaceIndexesRequest &request)
{
    return qobject_cast<ListPlaceIndexesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListRouteCalculatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists route calculator resources in your AWS
 */
ListRouteCalculatorsResponse * LocationServiceClient::listRouteCalculators(const ListRouteCalculatorsRequest &request)
{
    return qobject_cast<ListRouteCalculatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tags for the specified Amazon Location Service
 */
ListTagsForResourceResponse * LocationServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListTrackerConsumersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofence collections currently associated to the given tracker
 */
ListTrackerConsumersResponse * LocationServiceClient::listTrackerConsumers(const ListTrackerConsumersRequest &request)
{
    return qobject_cast<ListTrackerConsumersResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * ListTrackersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tracker resources in your AWS
 */
ListTrackersResponse * LocationServiceClient::listTrackers(const ListTrackersRequest &request)
{
    return qobject_cast<ListTrackersResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * PutGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores a geofence geometry in a given geofence collection, or updates the geometry of an existing geofence if a geofence
 * ID is included in the request.
 */
PutGeofenceResponse * LocationServiceClient::putGeofence(const PutGeofenceRequest &request)
{
    return qobject_cast<PutGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * SearchPlaceIndexForPositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reverse geocodes a given coordinate and returns a legible address. Allows you to search for Places or points of interest
 * near a given
 */
SearchPlaceIndexForPositionResponse * LocationServiceClient::searchPlaceIndexForPosition(const SearchPlaceIndexForPositionRequest &request)
{
    return qobject_cast<SearchPlaceIndexForPositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * SearchPlaceIndexForTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Geocodes free-form text, such as an address, name, city, or region to allow you to search for Places or points of
 * interest.
 *
 * </p
 *
 * Includes the option to apply additional parameters to narrow your list of
 *
 * results> <note>
 *
 * You can search for places near a given position using <code>BiasPosition</code>, or filter results within a bounding box
 * using <code>FilterBBox</code>. Providing both parameters simultaneously returns an
 */
SearchPlaceIndexForTextResponse * LocationServiceClient::searchPlaceIndexForText(const SearchPlaceIndexForTextRequest &request)
{
    return qobject_cast<SearchPlaceIndexForTextResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified Amazon Location Service
 *
 * resource> <pre><code> &lt;p&gt;Tags can help you organize and categorize your resources. You can also use them to scope
 * user permissions, by granting a user permission to access or change only resources with certain tag values.&lt;/p&gt;
 * &lt;p&gt;Tags don't have any semantic meaning to AWS and are interpreted strictly as strings of characters.&lt;/p&gt;
 * &lt;p&gt;You can use the &lt;code&gt;TagResource&lt;/code&gt; action with an Amazon Location Service resource that
 * already has tags. If you specify a new tag key for the resource, this tag is appended to the tags already associated
 * with the resource. If you specify a tag key that is already associated with the resource, the new tag value that you
 * specify replaces the previous value for that tag. &lt;/p&gt; &lt;p&gt;You can associate as many as 50 tags with a
 */
TagResourceResponse * LocationServiceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationServiceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified Amazon Location Service
 */
UntagResourceResponse * LocationServiceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::LocationService::LocationServiceClientPrivate
 * \brief The LocationServiceClientPrivate class provides private implementation for LocationServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a LocationServiceClientPrivate object with public implementation \a q.
 */
LocationServiceClientPrivate::LocationServiceClientPrivate(LocationServiceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace LocationService
} // namespace QtAws
