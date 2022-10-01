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

#ifndef QTAWS_CLOUDTRAILCLIENT_H
#define QTAWS_CLOUDTRAILCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudtrailglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudTrail {

class CloudTrailClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class CancelQueryRequest;
class CancelQueryResponse;
class CreateEventDataStoreRequest;
class CreateEventDataStoreResponse;
class CreateTrailRequest;
class CreateTrailResponse;
class DeleteEventDataStoreRequest;
class DeleteEventDataStoreResponse;
class DeleteTrailRequest;
class DeleteTrailResponse;
class DescribeQueryRequest;
class DescribeQueryResponse;
class DescribeTrailsRequest;
class DescribeTrailsResponse;
class GetChannelRequest;
class GetChannelResponse;
class GetEventDataStoreRequest;
class GetEventDataStoreResponse;
class GetEventSelectorsRequest;
class GetEventSelectorsResponse;
class GetImportRequest;
class GetImportResponse;
class GetInsightSelectorsRequest;
class GetInsightSelectorsResponse;
class GetQueryResultsRequest;
class GetQueryResultsResponse;
class GetTrailRequest;
class GetTrailResponse;
class GetTrailStatusRequest;
class GetTrailStatusResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListEventDataStoresRequest;
class ListEventDataStoresResponse;
class ListImportFailuresRequest;
class ListImportFailuresResponse;
class ListImportsRequest;
class ListImportsResponse;
class ListPublicKeysRequest;
class ListPublicKeysResponse;
class ListQueriesRequest;
class ListQueriesResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListTrailsRequest;
class ListTrailsResponse;
class LookupEventsRequest;
class LookupEventsResponse;
class PutEventSelectorsRequest;
class PutEventSelectorsResponse;
class PutInsightSelectorsRequest;
class PutInsightSelectorsResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class RestoreEventDataStoreRequest;
class RestoreEventDataStoreResponse;
class StartImportRequest;
class StartImportResponse;
class StartLoggingRequest;
class StartLoggingResponse;
class StartQueryRequest;
class StartQueryResponse;
class StopImportRequest;
class StopImportResponse;
class StopLoggingRequest;
class StopLoggingResponse;
class UpdateEventDataStoreRequest;
class UpdateEventDataStoreResponse;
class UpdateTrailRequest;
class UpdateTrailResponse;

class QTAWSCLOUDTRAIL_EXPORT CloudTrailClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudTrailClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudTrailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CancelQueryResponse * cancelQuery(const CancelQueryRequest &request);
    CreateEventDataStoreResponse * createEventDataStore(const CreateEventDataStoreRequest &request);
    CreateTrailResponse * createTrail(const CreateTrailRequest &request);
    DeleteEventDataStoreResponse * deleteEventDataStore(const DeleteEventDataStoreRequest &request);
    DeleteTrailResponse * deleteTrail(const DeleteTrailRequest &request);
    DescribeQueryResponse * describeQuery(const DescribeQueryRequest &request);
    DescribeTrailsResponse * describeTrails(const DescribeTrailsRequest &request);
    GetChannelResponse * getChannel(const GetChannelRequest &request);
    GetEventDataStoreResponse * getEventDataStore(const GetEventDataStoreRequest &request);
    GetEventSelectorsResponse * getEventSelectors(const GetEventSelectorsRequest &request);
    GetImportResponse * getImport(const GetImportRequest &request);
    GetInsightSelectorsResponse * getInsightSelectors(const GetInsightSelectorsRequest &request);
    GetQueryResultsResponse * getQueryResults(const GetQueryResultsRequest &request);
    GetTrailResponse * getTrail(const GetTrailRequest &request);
    GetTrailStatusResponse * getTrailStatus(const GetTrailStatusRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListEventDataStoresResponse * listEventDataStores(const ListEventDataStoresRequest &request);
    ListImportFailuresResponse * listImportFailures(const ListImportFailuresRequest &request);
    ListImportsResponse * listImports(const ListImportsRequest &request);
    ListPublicKeysResponse * listPublicKeys(const ListPublicKeysRequest &request);
    ListQueriesResponse * listQueries(const ListQueriesRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListTrailsResponse * listTrails(const ListTrailsRequest &request);
    LookupEventsResponse * lookupEvents(const LookupEventsRequest &request);
    PutEventSelectorsResponse * putEventSelectors(const PutEventSelectorsRequest &request);
    PutInsightSelectorsResponse * putInsightSelectors(const PutInsightSelectorsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    RestoreEventDataStoreResponse * restoreEventDataStore(const RestoreEventDataStoreRequest &request);
    StartImportResponse * startImport(const StartImportRequest &request);
    StartLoggingResponse * startLogging(const StartLoggingRequest &request);
    StartQueryResponse * startQuery(const StartQueryRequest &request);
    StopImportResponse * stopImport(const StopImportRequest &request);
    StopLoggingResponse * stopLogging(const StopLoggingRequest &request);
    UpdateEventDataStoreResponse * updateEventDataStore(const UpdateEventDataStoreRequest &request);
    UpdateTrailResponse * updateTrail(const UpdateTrailRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudTrailClient)
    Q_DISABLE_COPY(CloudTrailClient)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
