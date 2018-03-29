/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIACONVERTCLIENT_H
#define QTAWS_MEDIACONVERTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace MediaConvert {

class MediaConvertClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreateJobTemplateRequest;
class CreateJobTemplateResponse;
class CreatePresetRequest;
class CreatePresetResponse;
class CreateQueueRequest;
class CreateQueueResponse;
class DeleteJobTemplateRequest;
class DeleteJobTemplateResponse;
class DeletePresetRequest;
class DeletePresetResponse;
class DeleteQueueRequest;
class DeleteQueueResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class GetJobRequest;
class GetJobResponse;
class GetJobTemplateRequest;
class GetJobTemplateResponse;
class GetPresetRequest;
class GetPresetResponse;
class GetQueueRequest;
class GetQueueResponse;
class ListJobTemplatesRequest;
class ListJobTemplatesResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListPresetsRequest;
class ListPresetsResponse;
class ListQueuesRequest;
class ListQueuesResponse;
class UpdateJobTemplateRequest;
class UpdateJobTemplateResponse;
class UpdatePresetRequest;
class UpdatePresetResponse;
class UpdateQueueRequest;
class UpdateQueueResponse;

class QTAWS_EXPORT MediaConvertClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MediaConvertClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaConvertClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateJobTemplateResponse * createJobTemplate(const CreateJobTemplateRequest &request);
    CreatePresetResponse * createPreset(const CreatePresetRequest &request);
    CreateQueueResponse * createQueue(const CreateQueueRequest &request);
    DeleteJobTemplateResponse * deleteJobTemplate(const DeleteJobTemplateRequest &request);
    DeletePresetResponse * deletePreset(const DeletePresetRequest &request);
    DeleteQueueResponse * deleteQueue(const DeleteQueueRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetJobTemplateResponse * getJobTemplate(const GetJobTemplateRequest &request);
    GetPresetResponse * getPreset(const GetPresetRequest &request);
    GetQueueResponse * getQueue(const GetQueueRequest &request);
    ListJobTemplatesResponse * listJobTemplates(const ListJobTemplatesRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListPresetsResponse * listPresets(const ListPresetsRequest &request);
    ListQueuesResponse * listQueues(const ListQueuesRequest &request);
    UpdateJobTemplateResponse * updateJobTemplate(const UpdateJobTemplateRequest &request);
    UpdatePresetResponse * updatePreset(const UpdatePresetRequest &request);
    UpdateQueueResponse * updateQueue(const UpdateQueueRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaConvertClient)
    Q_DISABLE_COPY(MediaConvertClient)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
