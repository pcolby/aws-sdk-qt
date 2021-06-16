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

#ifndef QTAWS_DATAEXCHANGECLIENT_H
#define QTAWS_DATAEXCHANGECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DataExchange {

class DataExchangeClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CreateDataSetRequest;
class CreateDataSetResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreateRevisionRequest;
class CreateRevisionResponse;
class DeleteAssetRequest;
class DeleteAssetResponse;
class DeleteDataSetRequest;
class DeleteDataSetResponse;
class DeleteRevisionRequest;
class DeleteRevisionResponse;
class GetAssetRequest;
class GetAssetResponse;
class GetDataSetRequest;
class GetDataSetResponse;
class GetJobRequest;
class GetJobResponse;
class GetRevisionRequest;
class GetRevisionResponse;
class ListDataSetRevisionsRequest;
class ListDataSetRevisionsResponse;
class ListDataSetsRequest;
class ListDataSetsResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListRevisionAssetsRequest;
class ListRevisionAssetsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartJobRequest;
class StartJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAssetRequest;
class UpdateAssetResponse;
class UpdateDataSetRequest;
class UpdateDataSetResponse;
class UpdateRevisionRequest;
class UpdateRevisionResponse;

class QTAWS_EXPORT DataExchangeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DataExchangeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DataExchangeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateDataSetResponse * createDataSet(const CreateDataSetRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateRevisionResponse * createRevision(const CreateRevisionRequest &request);
    DeleteAssetResponse * deleteAsset(const DeleteAssetRequest &request);
    DeleteDataSetResponse * deleteDataSet(const DeleteDataSetRequest &request);
    DeleteRevisionResponse * deleteRevision(const DeleteRevisionRequest &request);
    GetAssetResponse * getAsset(const GetAssetRequest &request);
    GetDataSetResponse * getDataSet(const GetDataSetRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetRevisionResponse * getRevision(const GetRevisionRequest &request);
    ListDataSetRevisionsResponse * listDataSetRevisions(const ListDataSetRevisionsRequest &request);
    ListDataSetsResponse * listDataSets(const ListDataSetsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListRevisionAssetsResponse * listRevisionAssets(const ListRevisionAssetsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartJobResponse * startJob(const StartJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAssetResponse * updateAsset(const UpdateAssetRequest &request);
    UpdateDataSetResponse * updateDataSet(const UpdateDataSetRequest &request);
    UpdateRevisionResponse * updateRevision(const UpdateRevisionRequest &request);

private:
    Q_DECLARE_PRIVATE(DataExchangeClient)
    Q_DISABLE_COPY(DataExchangeClient)

};

} // namespace DataExchange
} // namespace QtAws

#endif
