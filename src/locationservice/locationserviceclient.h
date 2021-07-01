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

#ifndef QTAWS_LOCATIONSERVICECLIENT_H
#define QTAWS_LOCATIONSERVICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslocationserviceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LocationService {

class LocationServiceClientPrivate;
class AssociateTrackerConsumerRequest;
class AssociateTrackerConsumerResponse;
class BatchDeleteDevicePositionHistoryRequest;
class BatchDeleteDevicePositionHistoryResponse;
class BatchDeleteGeofenceRequest;
class BatchDeleteGeofenceResponse;
class BatchEvaluateGeofencesRequest;
class BatchEvaluateGeofencesResponse;
class BatchGetDevicePositionRequest;
class BatchGetDevicePositionResponse;
class BatchPutGeofenceRequest;
class BatchPutGeofenceResponse;
class BatchUpdateDevicePositionRequest;
class BatchUpdateDevicePositionResponse;
class CalculateRouteRequest;
class CalculateRouteResponse;
class CreateGeofenceCollectionRequest;
class CreateGeofenceCollectionResponse;
class CreateMapRequest;
class CreateMapResponse;
class CreatePlaceIndexRequest;
class CreatePlaceIndexResponse;
class CreateRouteCalculatorRequest;
class CreateRouteCalculatorResponse;
class CreateTrackerRequest;
class CreateTrackerResponse;
class DeleteGeofenceCollectionRequest;
class DeleteGeofenceCollectionResponse;
class DeleteMapRequest;
class DeleteMapResponse;
class DeletePlaceIndexRequest;
class DeletePlaceIndexResponse;
class DeleteRouteCalculatorRequest;
class DeleteRouteCalculatorResponse;
class DeleteTrackerRequest;
class DeleteTrackerResponse;
class DescribeGeofenceCollectionRequest;
class DescribeGeofenceCollectionResponse;
class DescribeMapRequest;
class DescribeMapResponse;
class DescribePlaceIndexRequest;
class DescribePlaceIndexResponse;
class DescribeRouteCalculatorRequest;
class DescribeRouteCalculatorResponse;
class DescribeTrackerRequest;
class DescribeTrackerResponse;
class DisassociateTrackerConsumerRequest;
class DisassociateTrackerConsumerResponse;
class GetDevicePositionRequest;
class GetDevicePositionResponse;
class GetDevicePositionHistoryRequest;
class GetDevicePositionHistoryResponse;
class GetGeofenceRequest;
class GetGeofenceResponse;
class GetMapGlyphsRequest;
class GetMapGlyphsResponse;
class GetMapSpritesRequest;
class GetMapSpritesResponse;
class GetMapStyleDescriptorRequest;
class GetMapStyleDescriptorResponse;
class GetMapTileRequest;
class GetMapTileResponse;
class ListDevicePositionsRequest;
class ListDevicePositionsResponse;
class ListGeofenceCollectionsRequest;
class ListGeofenceCollectionsResponse;
class ListGeofencesRequest;
class ListGeofencesResponse;
class ListMapsRequest;
class ListMapsResponse;
class ListPlaceIndexesRequest;
class ListPlaceIndexesResponse;
class ListRouteCalculatorsRequest;
class ListRouteCalculatorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTrackerConsumersRequest;
class ListTrackerConsumersResponse;
class ListTrackersRequest;
class ListTrackersResponse;
class PutGeofenceRequest;
class PutGeofenceResponse;
class SearchPlaceIndexForPositionRequest;
class SearchPlaceIndexForPositionResponse;
class SearchPlaceIndexForTextRequest;
class SearchPlaceIndexForTextResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSLOCATIONSERVICE_EXPORT LocationServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LocationServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LocationServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateTrackerConsumerResponse * associateTrackerConsumer(const AssociateTrackerConsumerRequest &request);
    BatchDeleteDevicePositionHistoryResponse * batchDeleteDevicePositionHistory(const BatchDeleteDevicePositionHistoryRequest &request);
    BatchDeleteGeofenceResponse * batchDeleteGeofence(const BatchDeleteGeofenceRequest &request);
    BatchEvaluateGeofencesResponse * batchEvaluateGeofences(const BatchEvaluateGeofencesRequest &request);
    BatchGetDevicePositionResponse * batchGetDevicePosition(const BatchGetDevicePositionRequest &request);
    BatchPutGeofenceResponse * batchPutGeofence(const BatchPutGeofenceRequest &request);
    BatchUpdateDevicePositionResponse * batchUpdateDevicePosition(const BatchUpdateDevicePositionRequest &request);
    CalculateRouteResponse * calculateRoute(const CalculateRouteRequest &request);
    CreateGeofenceCollectionResponse * createGeofenceCollection(const CreateGeofenceCollectionRequest &request);
    CreateMapResponse * createMap(const CreateMapRequest &request);
    CreatePlaceIndexResponse * createPlaceIndex(const CreatePlaceIndexRequest &request);
    CreateRouteCalculatorResponse * createRouteCalculator(const CreateRouteCalculatorRequest &request);
    CreateTrackerResponse * createTracker(const CreateTrackerRequest &request);
    DeleteGeofenceCollectionResponse * deleteGeofenceCollection(const DeleteGeofenceCollectionRequest &request);
    DeleteMapResponse * deleteMap(const DeleteMapRequest &request);
    DeletePlaceIndexResponse * deletePlaceIndex(const DeletePlaceIndexRequest &request);
    DeleteRouteCalculatorResponse * deleteRouteCalculator(const DeleteRouteCalculatorRequest &request);
    DeleteTrackerResponse * deleteTracker(const DeleteTrackerRequest &request);
    DescribeGeofenceCollectionResponse * describeGeofenceCollection(const DescribeGeofenceCollectionRequest &request);
    DescribeMapResponse * describeMap(const DescribeMapRequest &request);
    DescribePlaceIndexResponse * describePlaceIndex(const DescribePlaceIndexRequest &request);
    DescribeRouteCalculatorResponse * describeRouteCalculator(const DescribeRouteCalculatorRequest &request);
    DescribeTrackerResponse * describeTracker(const DescribeTrackerRequest &request);
    DisassociateTrackerConsumerResponse * disassociateTrackerConsumer(const DisassociateTrackerConsumerRequest &request);
    GetDevicePositionResponse * getDevicePosition(const GetDevicePositionRequest &request);
    GetDevicePositionHistoryResponse * getDevicePositionHistory(const GetDevicePositionHistoryRequest &request);
    GetGeofenceResponse * getGeofence(const GetGeofenceRequest &request);
    GetMapGlyphsResponse * getMapGlyphs(const GetMapGlyphsRequest &request);
    GetMapSpritesResponse * getMapSprites(const GetMapSpritesRequest &request);
    GetMapStyleDescriptorResponse * getMapStyleDescriptor(const GetMapStyleDescriptorRequest &request);
    GetMapTileResponse * getMapTile(const GetMapTileRequest &request);
    ListDevicePositionsResponse * listDevicePositions(const ListDevicePositionsRequest &request);
    ListGeofenceCollectionsResponse * listGeofenceCollections(const ListGeofenceCollectionsRequest &request);
    ListGeofencesResponse * listGeofences(const ListGeofencesRequest &request);
    ListMapsResponse * listMaps(const ListMapsRequest &request);
    ListPlaceIndexesResponse * listPlaceIndexes(const ListPlaceIndexesRequest &request);
    ListRouteCalculatorsResponse * listRouteCalculators(const ListRouteCalculatorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTrackerConsumersResponse * listTrackerConsumers(const ListTrackerConsumersRequest &request);
    ListTrackersResponse * listTrackers(const ListTrackersRequest &request);
    PutGeofenceResponse * putGeofence(const PutGeofenceRequest &request);
    SearchPlaceIndexForPositionResponse * searchPlaceIndexForPosition(const SearchPlaceIndexForPositionRequest &request);
    SearchPlaceIndexForTextResponse * searchPlaceIndexForText(const SearchPlaceIndexForTextRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(LocationServiceClient)
    Q_DISABLE_COPY(LocationServiceClient)

};

} // namespace LocationService
} // namespace QtAws

#endif
