// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectcampaignsclient.h"
#include "connectcampaignsclient_p.h"

#include "core/awssignaturev4.h"
#include "createcampaignrequest.h"
#include "createcampaignresponse.h"
#include "deletecampaignrequest.h"
#include "deletecampaignresponse.h"
#include "deleteconnectinstanceconfigrequest.h"
#include "deleteconnectinstanceconfigresponse.h"
#include "deleteinstanceonboardingjobrequest.h"
#include "deleteinstanceonboardingjobresponse.h"
#include "describecampaignrequest.h"
#include "describecampaignresponse.h"
#include "getcampaignstaterequest.h"
#include "getcampaignstateresponse.h"
#include "getcampaignstatebatchrequest.h"
#include "getcampaignstatebatchresponse.h"
#include "getconnectinstanceconfigrequest.h"
#include "getconnectinstanceconfigresponse.h"
#include "getinstanceonboardingjobstatusrequest.h"
#include "getinstanceonboardingjobstatusresponse.h"
#include "listcampaignsrequest.h"
#include "listcampaignsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "pausecampaignrequest.h"
#include "pausecampaignresponse.h"
#include "putdialrequestbatchrequest.h"
#include "putdialrequestbatchresponse.h"
#include "resumecampaignrequest.h"
#include "resumecampaignresponse.h"
#include "startcampaignrequest.h"
#include "startcampaignresponse.h"
#include "startinstanceonboardingjobrequest.h"
#include "startinstanceonboardingjobresponse.h"
#include "stopcampaignrequest.h"
#include "stopcampaignresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecampaigndialerconfigrequest.h"
#include "updatecampaigndialerconfigresponse.h"
#include "updatecampaignnamerequest.h"
#include "updatecampaignnameresponse.h"
#include "updatecampaignoutboundcallconfigrequest.h"
#include "updatecampaignoutboundcallconfigresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ConnectCampaigns
 * \brief Contains classess for accessing AmazonConnectCampaignService.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsClient
 * \brief The ConnectCampaignsClient class provides access to the AmazonConnectCampaignService service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectCampaigns
 *
 */

/*!
 * \brief Constructs a ConnectCampaignsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectCampaignsClient::ConnectCampaignsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectCampaignsClientPrivate(this), parent)
{
    Q_D(ConnectCampaignsClient);
    d->apiVersion = QStringLiteral("2021-01-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmazonConnectCampaignService");
    d->serviceName = QStringLiteral("connect-campaigns");
}

/*!
 * \overload ConnectCampaignsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectCampaignsClient::ConnectCampaignsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectCampaignsClientPrivate(this), parent)
{
    Q_D(ConnectCampaignsClient);
    d->apiVersion = QStringLiteral("2021-01-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmazonConnectCampaignService");
    d->serviceName = QStringLiteral("connect-campaigns");
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * CreateCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateCampaignResponse * ConnectCampaignsClient::createCampaign(const CreateCampaignRequest &request)
{
    return qobject_cast<CreateCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * DeleteCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteCampaignResponse * ConnectCampaignsClient::deleteCampaign(const DeleteCampaignRequest &request)
{
    return qobject_cast<DeleteCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * DeleteConnectInstanceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteConnectInstanceConfigResponse * ConnectCampaignsClient::deleteConnectInstanceConfig(const DeleteConnectInstanceConfigRequest &request)
{
    return qobject_cast<DeleteConnectInstanceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * DeleteInstanceOnboardingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInstanceOnboardingJobResponse * ConnectCampaignsClient::deleteInstanceOnboardingJob(const DeleteInstanceOnboardingJobRequest &request)
{
    return qobject_cast<DeleteInstanceOnboardingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * DescribeCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeCampaignResponse * ConnectCampaignsClient::describeCampaign(const DescribeCampaignRequest &request)
{
    return qobject_cast<DescribeCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * GetCampaignStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignStateResponse * ConnectCampaignsClient::getCampaignState(const GetCampaignStateRequest &request)
{
    return qobject_cast<GetCampaignStateResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * GetCampaignStateBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignStateBatchResponse * ConnectCampaignsClient::getCampaignStateBatch(const GetCampaignStateBatchRequest &request)
{
    return qobject_cast<GetCampaignStateBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * GetConnectInstanceConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetConnectInstanceConfigResponse * ConnectCampaignsClient::getConnectInstanceConfig(const GetConnectInstanceConfigRequest &request)
{
    return qobject_cast<GetConnectInstanceConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * GetInstanceOnboardingJobStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetInstanceOnboardingJobStatusResponse * ConnectCampaignsClient::getInstanceOnboardingJobStatus(const GetInstanceOnboardingJobStatusRequest &request)
{
    return qobject_cast<GetInstanceOnboardingJobStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * ListCampaignsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListCampaignsResponse * ConnectCampaignsClient::listCampaigns(const ListCampaignsRequest &request)
{
    return qobject_cast<ListCampaignsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * ConnectCampaignsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * PauseCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PauseCampaignResponse * ConnectCampaignsClient::pauseCampaign(const PauseCampaignRequest &request)
{
    return qobject_cast<PauseCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * PutDialRequestBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutDialRequestBatchResponse * ConnectCampaignsClient::putDialRequestBatch(const PutDialRequestBatchRequest &request)
{
    return qobject_cast<PutDialRequestBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * ResumeCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ResumeCampaignResponse * ConnectCampaignsClient::resumeCampaign(const ResumeCampaignRequest &request)
{
    return qobject_cast<ResumeCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * StartCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartCampaignResponse * ConnectCampaignsClient::startCampaign(const StartCampaignRequest &request)
{
    return qobject_cast<StartCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * StartInstanceOnboardingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartInstanceOnboardingJobResponse * ConnectCampaignsClient::startInstanceOnboardingJob(const StartInstanceOnboardingJobRequest &request)
{
    return qobject_cast<StartInstanceOnboardingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * StopCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StopCampaignResponse * ConnectCampaignsClient::stopCampaign(const StopCampaignRequest &request)
{
    return qobject_cast<StopCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
TagResourceResponse * ConnectCampaignsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UntagResourceResponse * ConnectCampaignsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * UpdateCampaignDialerConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateCampaignDialerConfigResponse * ConnectCampaignsClient::updateCampaignDialerConfig(const UpdateCampaignDialerConfigRequest &request)
{
    return qobject_cast<UpdateCampaignDialerConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * UpdateCampaignNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateCampaignNameResponse * ConnectCampaignsClient::updateCampaignName(const UpdateCampaignNameRequest &request)
{
    return qobject_cast<UpdateCampaignNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectCampaignsClient service, and returns a pointer to an
 * UpdateCampaignOutboundCallConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateCampaignOutboundCallConfigResponse * ConnectCampaignsClient::updateCampaignOutboundCallConfig(const UpdateCampaignOutboundCallConfigRequest &request)
{
    return qobject_cast<UpdateCampaignOutboundCallConfigResponse *>(send(request));
}

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsClientPrivate
 * \brief The ConnectCampaignsClientPrivate class provides private implementation for ConnectCampaignsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ConnectCampaignsClientPrivate object with public implementation \a q.
 */
ConnectCampaignsClientPrivate::ConnectCampaignsClientPrivate(ConnectCampaignsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ConnectCampaigns
} // namespace QtAws
