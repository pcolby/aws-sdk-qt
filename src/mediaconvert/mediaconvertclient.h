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

#ifndef QTAWS_MEDIACONVERTCLIENT_H
#define QTAWS_MEDIACONVERTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediaconvertglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaConvert {

class MediaConvertClientPrivate;
class AssociateCertificateRequest;
class AssociateCertificateResponse;
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
class DeletePolicyRequest;
class DeletePolicyResponse;
class DeletePresetRequest;
class DeletePresetResponse;
class DeleteQueueRequest;
class DeleteQueueResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class DisassociateCertificateRequest;
class DisassociateCertificateResponse;
class GetJobRequest;
class GetJobResponse;
class GetJobTemplateRequest;
class GetJobTemplateResponse;
class GetPolicyRequest;
class GetPolicyResponse;
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
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutPolicyRequest;
class PutPolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateJobTemplateRequest;
class UpdateJobTemplateResponse;
class UpdatePresetRequest;
class UpdatePresetResponse;
class UpdateQueueRequest;
class UpdateQueueResponse;

class QTAWSMEDIACONVERT_EXPORT MediaConvertClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaConvertClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaConvertClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateCertificateResponse * associateCertificate(const AssociateCertificateRequest &request);
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateJobTemplateResponse * createJobTemplate(const CreateJobTemplateRequest &request);
    CreatePresetResponse * createPreset(const CreatePresetRequest &request);
    CreateQueueResponse * createQueue(const CreateQueueRequest &request);
    DeleteJobTemplateResponse * deleteJobTemplate(const DeleteJobTemplateRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeletePresetResponse * deletePreset(const DeletePresetRequest &request);
    DeleteQueueResponse * deleteQueue(const DeleteQueueRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DisassociateCertificateResponse * disassociateCertificate(const DisassociateCertificateRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetJobTemplateResponse * getJobTemplate(const GetJobTemplateRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetPresetResponse * getPreset(const GetPresetRequest &request);
    GetQueueResponse * getQueue(const GetQueueRequest &request);
    ListJobTemplatesResponse * listJobTemplates(const ListJobTemplatesRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListPresetsResponse * listPresets(const ListPresetsRequest &request);
    ListQueuesResponse * listQueues(const ListQueuesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutPolicyResponse * putPolicy(const PutPolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
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
