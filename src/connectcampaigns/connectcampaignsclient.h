// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSCLIENT_H
#define QTAWS_CONNECTCAMPAIGNSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsconnectcampaignsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsClientPrivate;
class CreateCampaignRequest;
class CreateCampaignResponse;
class DeleteCampaignRequest;
class DeleteCampaignResponse;
class DeleteConnectInstanceConfigRequest;
class DeleteConnectInstanceConfigResponse;
class DeleteInstanceOnboardingJobRequest;
class DeleteInstanceOnboardingJobResponse;
class DescribeCampaignRequest;
class DescribeCampaignResponse;
class GetCampaignStateRequest;
class GetCampaignStateResponse;
class GetCampaignStateBatchRequest;
class GetCampaignStateBatchResponse;
class GetConnectInstanceConfigRequest;
class GetConnectInstanceConfigResponse;
class GetInstanceOnboardingJobStatusRequest;
class GetInstanceOnboardingJobStatusResponse;
class ListCampaignsRequest;
class ListCampaignsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PauseCampaignRequest;
class PauseCampaignResponse;
class PutDialRequestBatchRequest;
class PutDialRequestBatchResponse;
class ResumeCampaignRequest;
class ResumeCampaignResponse;
class StartCampaignRequest;
class StartCampaignResponse;
class StartInstanceOnboardingJobRequest;
class StartInstanceOnboardingJobResponse;
class StopCampaignRequest;
class StopCampaignResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCampaignDialerConfigRequest;
class UpdateCampaignDialerConfigResponse;
class UpdateCampaignNameRequest;
class UpdateCampaignNameResponse;
class UpdateCampaignOutboundCallConfigRequest;
class UpdateCampaignOutboundCallConfigResponse;

class QTAWSCONNECTCAMPAIGNS_EXPORT ConnectCampaignsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConnectCampaignsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ConnectCampaignsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteConnectInstanceConfigResponse * deleteConnectInstanceConfig(const DeleteConnectInstanceConfigRequest &request);
    DeleteInstanceOnboardingJobResponse * deleteInstanceOnboardingJob(const DeleteInstanceOnboardingJobRequest &request);
    DescribeCampaignResponse * describeCampaign(const DescribeCampaignRequest &request);
    GetCampaignStateResponse * getCampaignState(const GetCampaignStateRequest &request);
    GetCampaignStateBatchResponse * getCampaignStateBatch(const GetCampaignStateBatchRequest &request);
    GetConnectInstanceConfigResponse * getConnectInstanceConfig(const GetConnectInstanceConfigRequest &request);
    GetInstanceOnboardingJobStatusResponse * getInstanceOnboardingJobStatus(const GetInstanceOnboardingJobStatusRequest &request);
    ListCampaignsResponse * listCampaigns(const ListCampaignsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PauseCampaignResponse * pauseCampaign(const PauseCampaignRequest &request);
    PutDialRequestBatchResponse * putDialRequestBatch(const PutDialRequestBatchRequest &request);
    ResumeCampaignResponse * resumeCampaign(const ResumeCampaignRequest &request);
    StartCampaignResponse * startCampaign(const StartCampaignRequest &request);
    StartInstanceOnboardingJobResponse * startInstanceOnboardingJob(const StartInstanceOnboardingJobRequest &request);
    StopCampaignResponse * stopCampaign(const StopCampaignRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCampaignDialerConfigResponse * updateCampaignDialerConfig(const UpdateCampaignDialerConfigRequest &request);
    UpdateCampaignNameResponse * updateCampaignName(const UpdateCampaignNameRequest &request);
    UpdateCampaignOutboundCallConfigResponse * updateCampaignOutboundCallConfig(const UpdateCampaignOutboundCallConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(ConnectCampaignsClient)
    Q_DISABLE_COPY(ConnectCampaignsClient)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
