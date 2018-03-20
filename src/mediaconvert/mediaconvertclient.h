/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIACONVERTCLIENT_H
#define QTAWS_MEDIACONVERTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MediaConvert {

class MediaConvertClientPrivate;
class CancelJobResponse;
class CreateJobResponse;
class CreateJobTemplateResponse;
class CreatePresetResponse;
class CreateQueueResponse;
class DeleteJobTemplateResponse;
class DeletePresetResponse;
class DeleteQueueResponse;
class DescribeEndpointsResponse;
class GetJobResponse;
class GetJobTemplateResponse;
class GetPresetResponse;
class GetQueueResponse;
class ListJobTemplatesResponse;
class ListJobsResponse;
class ListPresetsResponse;
class ListQueuesResponse;
class UpdateJobTemplateResponse;
class UpdatePresetResponse;
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
} // namespace AWS

#endif
