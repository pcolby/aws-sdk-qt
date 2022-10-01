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

#include "locationclient.h"
#include "locationclient_p.h"

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
#include "calculateroutematrixrequest.h"
#include "calculateroutematrixresponse.h"
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
#include "searchplaceindexforsuggestionsrequest.h"
#include "searchplaceindexforsuggestionsresponse.h"
#include "searchplaceindexfortextrequest.h"
#include "searchplaceindexfortextresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updategeofencecollectionrequest.h"
#include "updategeofencecollectionresponse.h"
#include "updatemaprequest.h"
#include "updatemapresponse.h"
#include "updateplaceindexrequest.h"
#include "updateplaceindexresponse.h"
#include "updateroutecalculatorrequest.h"
#include "updateroutecalculatorresponse.h"
#include "updatetrackerrequest.h"
#include "updatetrackerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Location
 * \brief Contains classess for accessing Amazon Location Service.
 *
 * \inmodule QtAwsLocation
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::LocationClient
 * \brief The LocationClient class provides access to the Amazon Location Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 */

/*!
 * \brief Constructs a LocationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LocationClient::LocationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LocationClientPrivate(this), parent)
{
    Q_D(LocationClient);
    d->apiVersion = QStringLiteral("2020-11-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Location Service");
    d->serviceName = QStringLiteral("geo");
}

/*!
 * \overload LocationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LocationClient::LocationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LocationClientPrivate(this), parent)
{
    Q_D(LocationClient);
    d->apiVersion = QStringLiteral("2020-11-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Location Service");
    d->serviceName = QStringLiteral("geo");
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * AssociateTrackerConsumerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between a geofence collection and a tracker resource. This allows the tracker resource to
 * communicate location data to the linked geofence collection.
 *
 * </p
 *
 * You can associate up to five geofence collections to each tracker
 *
 * resource> <note>
 *
 * Currently not supported — Cross-account configurations, such as creating associations between a tracker resource in one
 * account and a geofence collection in another
 */
AssociateTrackerConsumerResponse * LocationClient::associateTrackerConsumer(const AssociateTrackerConsumerRequest &request)
{
    return qobject_cast<AssociateTrackerConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * BatchDeleteDevicePositionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the position history of one or more devices from a tracker
 */
BatchDeleteDevicePositionHistoryResponse * LocationClient::batchDeleteDevicePositionHistory(const BatchDeleteDevicePositionHistoryRequest &request)
{
    return qobject_cast<BatchDeleteDevicePositionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
BatchDeleteGeofenceResponse * LocationClient::batchDeleteGeofence(const BatchDeleteGeofenceRequest &request)
{
    return qobject_cast<BatchDeleteGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * BatchEvaluateGeofencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Evaluates device positions against the geofence geometries from a given geofence
 *
 * collection>
 *
 * This operation always returns an empty response because geofences are asynchronously evaluated. The evaluation
 * determines if the device has entered or exited a geofenced area, and then publishes one of the following events to
 * Amazon
 *
 * EventBridge> <ul> <li>
 *
 * <code>ENTER</code> if Amazon Location determines that the tracked device has entered a geofenced
 *
 * area> </li> <li>
 *
 * <code>EXIT</code> if Amazon Location determines that the tracked device has exited a geofenced
 *
 * area> </li> </ul> <note>
 *
 * The last geofence that a device was observed within is tracked for 30 days after the most recent device position
 *
 * update> </note> <note>
 *
 * Geofence evaluation uses the given device position. It does not account for the optional <code>Accuracy</code> of a
 *
 * <code>DevicePositionUpdate</code>> </note> <note>
 *
 * The <code>DeviceID</code> is used as a string to represent the device. You do not need to have a <code>Tracker</code>
 * associated with the
 */
BatchEvaluateGeofencesResponse * LocationClient::batchEvaluateGeofences(const BatchEvaluateGeofencesRequest &request)
{
    return qobject_cast<BatchEvaluateGeofencesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * BatchGetDevicePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the latest device positions for requested
 */
BatchGetDevicePositionResponse * LocationClient::batchGetDevicePosition(const BatchGetDevicePositionRequest &request)
{
    return qobject_cast<BatchGetDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * BatchPutGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A batch request for storing geofence geometries into a given geofence collection, or updates the geometry of an existing
 * geofence if a geofence ID is included in the
 */
BatchPutGeofenceResponse * LocationClient::batchPutGeofence(const BatchPutGeofenceRequest &request)
{
    return qobject_cast<BatchPutGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * BatchUpdateDevicePositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads position update data for one or more devices to a tracker resource. Amazon Location uses the data when it
 * reports the last known device position and position history. Amazon Location retains location data for 30
 *
 * days> <note>
 *
 * Position updates are handled based on the <code>PositionFiltering</code> property of the tracker. When
 * <code>PositionFiltering</code> is set to <code>TimeBased</code>, updates are evaluated against linked geofence
 * collections, and location data is stored at a maximum of one position per 30 second interval. If your update frequency
 * is more often than every 30 seconds, only one update per 30 seconds is stored for each unique device
 *
 * ID>
 *
 * When <code>PositionFiltering</code> is set to <code>DistanceBased</code> filtering, location data is stored and
 * evaluated against linked geofence collections only if the device has moved more than 30 m (98.4
 *
 * ft)>
 *
 * When <code>PositionFiltering</code> is set to <code>AccuracyBased</code> filtering, location data is stored and
 * evaluated against linked geofence collections only if the device has moved more than the measured accuracy. For example,
 * if two consecutive updates from a device have a horizontal accuracy of 5 m and 10 m, the second update is neither stored
 * or evaluated if the device has moved less than 15 m. If <code>PositionFiltering</code> is set to
 * <code>AccuracyBased</code> filtering, Amazon Location uses the default value <code>{ "Horizontal": 0}</code> when
 * accuracy is not provided on a
 */
BatchUpdateDevicePositionResponse * LocationClient::batchUpdateDevicePosition(const BatchUpdateDevicePositionRequest &request)
{
    return qobject_cast<BatchUpdateDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CalculateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route.html">Calculates a route</a> given
 * the following required parameters: <code>DeparturePosition</code> and <code>DestinationPosition</code>. Requires that
 * you first <a
 * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create a route
 * calculator
 *
 * resource</a>>
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
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/departure-time.html">Specifying a departure time</a>
 * using either <code>DepartureTime</code> or <code>DepartNow</code>. This calculates a route based on predictive traffic
 * data at the given time.
 *
 * </p <note>
 *
 * You can't specify both <code>DepartureTime</code> and <code>DepartNow</code> in a single request. Specifying both
 * parameters returns a validation
 *
 * error> </note> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/travel-mode.html">Specifying a travel mode</a> using
 * TravelMode sets the transportation mode used to calculate the routes. This also lets you specify additional route
 * preferences in <code>CarModeOptions</code> if traveling by <code>Car</code>, or <code>TruckModeOptions</code> if
 * traveling by
 *
 * <code>Truck</code>> <note>
 *
 * If you specify <code>walking</code> for the travel mode and your data provider is Esri, the start and destination must
 * be within
 */
CalculateRouteResponse * LocationClient::calculateRoute(const CalculateRouteRequest &request)
{
    return qobject_cast<CalculateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CalculateRouteMatrixResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/calculate-route-matrix.html"> Calculates a route
 * matrix</a> given the following required parameters: <code>DeparturePositions</code> and
 * <code>DestinationPositions</code>. <code>CalculateRouteMatrix</code> calculates routes and returns the travel time and
 * travel distance from each departure position to each destination position in the request. For example, given departure
 * positions A and B, and destination positions X and Y, <code>CalculateRouteMatrix</code> will return time and distance
 * for routes from A to X, A to Y, B to X, and B to Y (in that order). The number of results returned (and routes
 * calculated) will be the number of <code>DeparturePositions</code> times the number of
 *
 * <code>DestinationPositions</code>> <note>
 *
 * Your account is charged for each route calculated, not the number of
 *
 * requests> </note>
 *
 * Requires that you first <a
 * href="https://docs.aws.amazon.com/location-routes/latest/APIReference/API_CreateRouteCalculator.html">create a route
 * calculator
 *
 * resource</a>>
 *
 * By default, a request that doesn't specify a departure time uses the best time of day to travel with the best traffic
 * conditions when calculating
 *
 * routes>
 *
 * Additional options
 *
 * include> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/departure-time.html"> Specifying a departure
 * time</a> using either <code>DepartureTime</code> or <code>DepartNow</code>. This calculates routes based on predictive
 * traffic data at the given time.
 *
 * </p <note>
 *
 * You can't specify both <code>DepartureTime</code> and <code>DepartNow</code> in a single request. Specifying both
 * parameters returns a validation
 *
 * error> </note> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/location/latest/developerguide/travel-mode.html">Specifying a travel mode</a> using
 * TravelMode sets the transportation mode used to calculate the routes. This also lets you specify additional route
 * preferences in <code>CarModeOptions</code> if traveling by <code>Car</code>, or <code>TruckModeOptions</code> if
 * traveling by
 */
CalculateRouteMatrixResponse * LocationClient::calculateRouteMatrix(const CalculateRouteMatrixRequest &request)
{
    return qobject_cast<CalculateRouteMatrixResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CreateGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a geofence collection, which manages and stores
 */
CreateGeofenceCollectionResponse * LocationClient::createGeofenceCollection(const CreateGeofenceCollectionRequest &request)
{
    return qobject_cast<CreateGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CreateMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a map resource in your AWS account, which provides map tiles of different styles sourced from global location
 * data
 *
 * providers> <note>
 *
 * If your application is tracking or routing assets you use in your business, such as delivery vehicles or employees, you
 * may only use HERE as your geolocation provider. See section 82 of the <a href="http://aws.amazon.com/service-terms">AWS
 * service terms</a> for more
 */
CreateMapResponse * LocationClient::createMap(const CreateMapRequest &request)
{
    return qobject_cast<CreateMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CreatePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a place index resource in your AWS account. Use a place index resource to geocode addresses and other text
 * queries by using the <code>SearchPlaceIndexForText</code> operation, and reverse geocode coordinates by using the
 * <code>SearchPlaceIndexForPosition</code> operation, and enable autosuggestions by using the
 * <code>SearchPlaceIndexForSuggestions</code>
 *
 * operation> <note>
 *
 * If your application is tracking or routing assets you use in your business, such as delivery vehicles or employees, you
 * may only use HERE as your geolocation provider. See section 82 of the <a href="http://aws.amazon.com/service-terms">AWS
 * service terms</a> for more
 */
CreatePlaceIndexResponse * LocationClient::createPlaceIndex(const CreatePlaceIndexRequest &request)
{
    return qobject_cast<CreatePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
 *
 * provider> <note>
 *
 * If your application is tracking or routing assets you use in your business, such as delivery vehicles or employees, you
 * may only use HERE as your geolocation provider. See section 82 of the <a href="http://aws.amazon.com/service-terms">AWS
 * service terms</a> for more
 */
CreateRouteCalculatorResponse * LocationClient::createRouteCalculator(const CreateRouteCalculatorRequest &request)
{
    return qobject_cast<CreateRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * CreateTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a tracker resource in your AWS account, which lets you retrieve current and historical location of
 */
CreateTrackerResponse * LocationClient::createTracker(const CreateTrackerRequest &request)
{
    return qobject_cast<CreateTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DeleteGeofenceCollectionResponse * LocationClient::deleteGeofenceCollection(const DeleteGeofenceCollectionRequest &request)
{
    return qobject_cast<DeleteGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DeleteMapResponse * LocationClient::deleteMap(const DeleteMapRequest &request)
{
    return qobject_cast<DeleteMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DeletePlaceIndexResponse * LocationClient::deletePlaceIndex(const DeletePlaceIndexRequest &request)
{
    return qobject_cast<DeletePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DeleteRouteCalculatorResponse * LocationClient::deleteRouteCalculator(const DeleteRouteCalculatorRequest &request)
{
    return qobject_cast<DeleteRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DeleteTrackerResponse * LocationClient::deleteTracker(const DeleteTrackerRequest &request)
{
    return qobject_cast<DeleteTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * DescribeGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the geofence collection
 */
DescribeGeofenceCollectionResponse * LocationClient::describeGeofenceCollection(const DescribeGeofenceCollectionRequest &request)
{
    return qobject_cast<DescribeGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * DescribeMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the map resource
 */
DescribeMapResponse * LocationClient::describeMap(const DescribeMapRequest &request)
{
    return qobject_cast<DescribeMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * DescribePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the place index resource
 */
DescribePlaceIndexResponse * LocationClient::describePlaceIndex(const DescribePlaceIndexRequest &request)
{
    return qobject_cast<DescribePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * DescribeRouteCalculatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the route calculator resource
 */
DescribeRouteCalculatorResponse * LocationClient::describeRouteCalculator(const DescribeRouteCalculatorRequest &request)
{
    return qobject_cast<DescribeRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * DescribeTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the tracker resource
 */
DescribeTrackerResponse * LocationClient::describeTracker(const DescribeTrackerRequest &request)
{
    return qobject_cast<DescribeTrackerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
DisassociateTrackerConsumerResponse * LocationClient::disassociateTrackerConsumer(const DisassociateTrackerConsumerRequest &request)
{
    return qobject_cast<DisassociateTrackerConsumerResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
GetDevicePositionResponse * LocationClient::getDevicePosition(const GetDevicePositionRequest &request)
{
    return qobject_cast<GetDevicePositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
GetDevicePositionHistoryResponse * LocationClient::getDevicePositionHistory(const GetDevicePositionHistoryRequest &request)
{
    return qobject_cast<GetDevicePositionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * GetGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the geofence details from a geofence
 */
GetGeofenceResponse * LocationClient::getGeofence(const GetGeofenceRequest &request)
{
    return qobject_cast<GetGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * GetMapGlyphsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves glyphs used to display labels on a
 */
GetMapGlyphsResponse * LocationClient::getMapGlyphs(const GetMapGlyphsRequest &request)
{
    return qobject_cast<GetMapGlyphsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * GetMapSpritesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the sprite sheet corresponding to a map resource. The sprite sheet is a PNG image paired with a JSON document
 * describing the offsets of individual icons that will be displayed on a rendered
 */
GetMapSpritesResponse * LocationClient::getMapSprites(const GetMapSpritesRequest &request)
{
    return qobject_cast<GetMapSpritesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
GetMapStyleDescriptorResponse * LocationClient::getMapStyleDescriptor(const GetMapStyleDescriptorRequest &request)
{
    return qobject_cast<GetMapStyleDescriptorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
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
GetMapTileResponse * LocationClient::getMapTile(const GetMapTileRequest &request)
{
    return qobject_cast<GetMapTileResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListDevicePositionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A batch request to retrieve all device
 */
ListDevicePositionsResponse * LocationClient::listDevicePositions(const ListDevicePositionsRequest &request)
{
    return qobject_cast<ListDevicePositionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListGeofenceCollectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofence collections in your AWS
 */
ListGeofenceCollectionsResponse * LocationClient::listGeofenceCollections(const ListGeofenceCollectionsRequest &request)
{
    return qobject_cast<ListGeofenceCollectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListGeofencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofences stored in a given geofence
 */
ListGeofencesResponse * LocationClient::listGeofences(const ListGeofencesRequest &request)
{
    return qobject_cast<ListGeofencesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListMapsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists map resources in your AWS
 */
ListMapsResponse * LocationClient::listMaps(const ListMapsRequest &request)
{
    return qobject_cast<ListMapsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListPlaceIndexesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists place index resources in your AWS
 */
ListPlaceIndexesResponse * LocationClient::listPlaceIndexes(const ListPlaceIndexesRequest &request)
{
    return qobject_cast<ListPlaceIndexesResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListRouteCalculatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists route calculator resources in your AWS
 */
ListRouteCalculatorsResponse * LocationClient::listRouteCalculators(const ListRouteCalculatorsRequest &request)
{
    return qobject_cast<ListRouteCalculatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags that are applied to the specified Amazon Location
 */
ListTagsForResourceResponse * LocationClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListTrackerConsumersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists geofence collections currently associated to the given tracker
 */
ListTrackerConsumersResponse * LocationClient::listTrackerConsumers(const ListTrackerConsumersRequest &request)
{
    return qobject_cast<ListTrackerConsumersResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * ListTrackersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tracker resources in your AWS
 */
ListTrackersResponse * LocationClient::listTrackers(const ListTrackersRequest &request)
{
    return qobject_cast<ListTrackersResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * PutGeofenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores a geofence geometry in a given geofence collection, or updates the geometry of an existing geofence if a geofence
 * ID is included in the request.
 */
PutGeofenceResponse * LocationClient::putGeofence(const PutGeofenceRequest &request)
{
    return qobject_cast<PutGeofenceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * SearchPlaceIndexForPositionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reverse geocodes a given coordinate and returns a legible address. Allows you to search for Places or points of interest
 * near a given
 */
SearchPlaceIndexForPositionResponse * LocationClient::searchPlaceIndexForPosition(const SearchPlaceIndexForPositionRequest &request)
{
    return qobject_cast<SearchPlaceIndexForPositionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * SearchPlaceIndexForSuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates suggestions for addresses and points of interest based on partial or misspelled free-form text. This operation
 * is also known as autocomplete, autosuggest, or fuzzy
 *
 * matching>
 *
 * Optional parameters let you narrow your search results by bounding box or country, or bias your search toward a specific
 * position on the
 *
 * globe> <note>
 *
 * You can search for suggested place names near a specified position by using <code>BiasPosition</code>, or filter results
 * within a bounding box by using <code>FilterBBox</code>. These parameters are mutually exclusive; using both
 * <code>BiasPosition</code> and <code>FilterBBox</code> in the same command returns an
 */
SearchPlaceIndexForSuggestionsResponse * LocationClient::searchPlaceIndexForSuggestions(const SearchPlaceIndexForSuggestionsRequest &request)
{
    return qobject_cast<SearchPlaceIndexForSuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * SearchPlaceIndexForTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Geocodes free-form text, such as an address, name, city, or region to allow you to search for Places or points of
 * interest.
 *
 * </p
 *
 * Optional parameters let you narrow your search results by bounding box or country, or bias your search toward a specific
 * position on the
 *
 * globe> <note>
 *
 * You can search for places near a given position using <code>BiasPosition</code>, or filter results within a bounding box
 * using <code>FilterBBox</code>. Providing both parameters simultaneously returns an
 *
 * error> </note>
 *
 * Search results are returned in order of highest to lowest
 */
SearchPlaceIndexForTextResponse * LocationClient::searchPlaceIndexForText(const SearchPlaceIndexForTextRequest &request)
{
    return qobject_cast<SearchPlaceIndexForTextResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified Amazon Location Service
 *
 * resource>
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions, by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * You can use the <code>TagResource</code> operation with an Amazon Location Service resource that already has tags. If
 * you specify a new tag key for the resource, this tag is appended to the tags already associated with the resource. If
 * you specify a tag key that's already associated with the resource, the new tag value that you specify replaces the
 * previous value for that tag.
 *
 * </p
 *
 * You can associate up to 50 tags with a
 */
TagResourceResponse * LocationClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified Amazon Location
 */
UntagResourceResponse * LocationClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UpdateGeofenceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified properties of a given geofence
 */
UpdateGeofenceCollectionResponse * LocationClient::updateGeofenceCollection(const UpdateGeofenceCollectionRequest &request)
{
    return qobject_cast<UpdateGeofenceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UpdateMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified properties of a given map
 */
UpdateMapResponse * LocationClient::updateMap(const UpdateMapRequest &request)
{
    return qobject_cast<UpdateMapResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UpdatePlaceIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified properties of a given place index
 */
UpdatePlaceIndexResponse * LocationClient::updatePlaceIndex(const UpdatePlaceIndexRequest &request)
{
    return qobject_cast<UpdatePlaceIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UpdateRouteCalculatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified properties for a given route calculator
 */
UpdateRouteCalculatorResponse * LocationClient::updateRouteCalculator(const UpdateRouteCalculatorRequest &request)
{
    return qobject_cast<UpdateRouteCalculatorResponse *>(send(request));
}

/*!
 * Sends \a request to the LocationClient service, and returns a pointer to an
 * UpdateTrackerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified properties of a given tracker
 */
UpdateTrackerResponse * LocationClient::updateTracker(const UpdateTrackerRequest &request)
{
    return qobject_cast<UpdateTrackerResponse *>(send(request));
}

/*!
 * \class QtAws::Location::LocationClientPrivate
 * \brief The LocationClientPrivate class provides private implementation for LocationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationClientPrivate object with public implementation \a q.
 */
LocationClientPrivate::LocationClientPrivate(LocationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Location
} // namespace QtAws
