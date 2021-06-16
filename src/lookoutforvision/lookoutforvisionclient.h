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

#ifndef QTAWS_LOOKOUTFORVISIONCLIENT_H
#define QTAWS_LOOKOUTFORVISIONCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace LookoutforVision {

class LookoutforVisionClientPrivate;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeModelRequest;
class DescribeModelResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DetectAnomaliesRequest;
class DetectAnomaliesResponse;
class ListDatasetEntriesRequest;
class ListDatasetEntriesResponse;
class ListModelsRequest;
class ListModelsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartModelRequest;
class StartModelResponse;
class StopModelRequest;
class StopModelResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatasetEntriesRequest;
class UpdateDatasetEntriesResponse;

class QTAWS_EXPORT LookoutforVisionClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LookoutforVisionClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LookoutforVisionClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeModelResponse * describeModel(const DescribeModelRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DetectAnomaliesResponse * detectAnomalies(const DetectAnomaliesRequest &request);
    ListDatasetEntriesResponse * listDatasetEntries(const ListDatasetEntriesRequest &request);
    ListModelsResponse * listModels(const ListModelsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartModelResponse * startModel(const StartModelRequest &request);
    StopModelResponse * stopModel(const StopModelRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatasetEntriesResponse * updateDatasetEntries(const UpdateDatasetEntriesRequest &request);

private:
    Q_DECLARE_PRIVATE(LookoutforVisionClient)
    Q_DISABLE_COPY(LookoutforVisionClient)

};

} // namespace LookoutforVision
} // namespace QtAws

#endif
