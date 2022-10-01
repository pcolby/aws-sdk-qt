// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSCLIENT_H
#define QTAWS_IOTANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotanalyticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsClientPrivate;
class BatchPutMessageRequest;
class BatchPutMessageResponse;
class CancelPipelineReprocessingRequest;
class CancelPipelineReprocessingResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateDatasetContentRequest;
class CreateDatasetContentResponse;
class CreateDatastoreRequest;
class CreateDatastoreResponse;
class CreatePipelineRequest;
class CreatePipelineResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteDatasetContentRequest;
class DeleteDatasetContentResponse;
class DeleteDatastoreRequest;
class DeleteDatastoreResponse;
class DeletePipelineRequest;
class DeletePipelineResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeDatastoreRequest;
class DescribeDatastoreResponse;
class DescribeLoggingOptionsRequest;
class DescribeLoggingOptionsResponse;
class DescribePipelineRequest;
class DescribePipelineResponse;
class GetDatasetContentRequest;
class GetDatasetContentResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListDatasetContentsRequest;
class ListDatasetContentsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListDatastoresRequest;
class ListDatastoresResponse;
class ListPipelinesRequest;
class ListPipelinesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutLoggingOptionsRequest;
class PutLoggingOptionsResponse;
class RunPipelineActivityRequest;
class RunPipelineActivityResponse;
class SampleChannelDataRequest;
class SampleChannelDataResponse;
class StartPipelineReprocessingRequest;
class StartPipelineReprocessingResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateDatasetRequest;
class UpdateDatasetResponse;
class UpdateDatastoreRequest;
class UpdateDatastoreResponse;
class UpdatePipelineRequest;
class UpdatePipelineResponse;

class QTAWSIOTANALYTICS_EXPORT IoTAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTAnalyticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchPutMessageResponse * batchPutMessage(const BatchPutMessageRequest &request);
    CancelPipelineReprocessingResponse * cancelPipelineReprocessing(const CancelPipelineReprocessingRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateDatasetContentResponse * createDatasetContent(const CreateDatasetContentRequest &request);
    CreateDatastoreResponse * createDatastore(const CreateDatastoreRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteDatasetContentResponse * deleteDatasetContent(const DeleteDatasetContentRequest &request);
    DeleteDatastoreResponse * deleteDatastore(const DeleteDatastoreRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeDatastoreResponse * describeDatastore(const DescribeDatastoreRequest &request);
    DescribeLoggingOptionsResponse * describeLoggingOptions(const DescribeLoggingOptionsRequest &request);
    DescribePipelineResponse * describePipeline(const DescribePipelineRequest &request);
    GetDatasetContentResponse * getDatasetContent(const GetDatasetContentRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListDatasetContentsResponse * listDatasetContents(const ListDatasetContentsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListDatastoresResponse * listDatastores(const ListDatastoresRequest &request);
    ListPipelinesResponse * listPipelines(const ListPipelinesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutLoggingOptionsResponse * putLoggingOptions(const PutLoggingOptionsRequest &request);
    RunPipelineActivityResponse * runPipelineActivity(const RunPipelineActivityRequest &request);
    SampleChannelDataResponse * sampleChannelData(const SampleChannelDataRequest &request);
    StartPipelineReprocessingResponse * startPipelineReprocessing(const StartPipelineReprocessingRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateDatasetResponse * updateDataset(const UpdateDatasetRequest &request);
    UpdateDatastoreResponse * updateDatastore(const UpdateDatastoreRequest &request);
    UpdatePipelineResponse * updatePipeline(const UpdatePipelineRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTAnalyticsClient)
    Q_DISABLE_COPY(IoTAnalyticsClient)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
