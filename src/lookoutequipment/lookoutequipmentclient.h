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

#ifndef QTAWS_LOOKOUTEQUIPMENTCLIENT_H
#define QTAWS_LOOKOUTEQUIPMENTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslookoutequipmentglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentClientPrivate;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateInferenceSchedulerRequest;
class CreateInferenceSchedulerResponse;
class CreateLabelRequest;
class CreateLabelResponse;
class CreateLabelGroupRequest;
class CreateLabelGroupResponse;
class CreateModelRequest;
class CreateModelResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteInferenceSchedulerRequest;
class DeleteInferenceSchedulerResponse;
class DeleteLabelRequest;
class DeleteLabelResponse;
class DeleteLabelGroupRequest;
class DeleteLabelGroupResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DescribeDataIngestionJobRequest;
class DescribeDataIngestionJobResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeInferenceSchedulerRequest;
class DescribeInferenceSchedulerResponse;
class DescribeLabelRequest;
class DescribeLabelResponse;
class DescribeLabelGroupRequest;
class DescribeLabelGroupResponse;
class DescribeModelRequest;
class DescribeModelResponse;
class ListDataIngestionJobsRequest;
class ListDataIngestionJobsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListInferenceEventsRequest;
class ListInferenceEventsResponse;
class ListInferenceExecutionsRequest;
class ListInferenceExecutionsResponse;
class ListInferenceSchedulersRequest;
class ListInferenceSchedulersResponse;
class ListLabelGroupsRequest;
class ListLabelGroupsResponse;
class ListLabelsRequest;
class ListLabelsResponse;
class ListModelsRequest;
class ListModelsResponse;
class ListSensorStatisticsRequest;
class ListSensorStatisticsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartDataIngestionJobRequest;
class StartDataIngestionJobResponse;
class StartInferenceSchedulerRequest;
class StartInferenceSchedulerResponse;
class StopInferenceSchedulerRequest;
class StopInferenceSchedulerResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateInferenceSchedulerRequest;
class UpdateInferenceSchedulerResponse;
class UpdateLabelGroupRequest;
class UpdateLabelGroupResponse;

class QTAWSLOOKOUTEQUIPMENT_EXPORT LookoutEquipmentClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LookoutEquipmentClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LookoutEquipmentClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateInferenceSchedulerResponse * createInferenceScheduler(const CreateInferenceSchedulerRequest &request);
    CreateLabelResponse * createLabel(const CreateLabelRequest &request);
    CreateLabelGroupResponse * createLabelGroup(const CreateLabelGroupRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteInferenceSchedulerResponse * deleteInferenceScheduler(const DeleteInferenceSchedulerRequest &request);
    DeleteLabelResponse * deleteLabel(const DeleteLabelRequest &request);
    DeleteLabelGroupResponse * deleteLabelGroup(const DeleteLabelGroupRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DescribeDataIngestionJobResponse * describeDataIngestionJob(const DescribeDataIngestionJobRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeInferenceSchedulerResponse * describeInferenceScheduler(const DescribeInferenceSchedulerRequest &request);
    DescribeLabelResponse * describeLabel(const DescribeLabelRequest &request);
    DescribeLabelGroupResponse * describeLabelGroup(const DescribeLabelGroupRequest &request);
    DescribeModelResponse * describeModel(const DescribeModelRequest &request);
    ListDataIngestionJobsResponse * listDataIngestionJobs(const ListDataIngestionJobsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListInferenceEventsResponse * listInferenceEvents(const ListInferenceEventsRequest &request);
    ListInferenceExecutionsResponse * listInferenceExecutions(const ListInferenceExecutionsRequest &request);
    ListInferenceSchedulersResponse * listInferenceSchedulers(const ListInferenceSchedulersRequest &request);
    ListLabelGroupsResponse * listLabelGroups(const ListLabelGroupsRequest &request);
    ListLabelsResponse * listLabels(const ListLabelsRequest &request);
    ListModelsResponse * listModels(const ListModelsRequest &request);
    ListSensorStatisticsResponse * listSensorStatistics(const ListSensorStatisticsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartDataIngestionJobResponse * startDataIngestionJob(const StartDataIngestionJobRequest &request);
    StartInferenceSchedulerResponse * startInferenceScheduler(const StartInferenceSchedulerRequest &request);
    StopInferenceSchedulerResponse * stopInferenceScheduler(const StopInferenceSchedulerRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateInferenceSchedulerResponse * updateInferenceScheduler(const UpdateInferenceSchedulerRequest &request);
    UpdateLabelGroupResponse * updateLabelGroup(const UpdateLabelGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(LookoutEquipmentClient)
    Q_DISABLE_COPY(LookoutEquipmentClient)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
