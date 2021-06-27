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

#include "servicequotasclient.h"
#include "servicequotasclient_p.h"

#include "core/awssignaturev4.h"
#include "associateservicequotatemplaterequest.h"
#include "associateservicequotatemplateresponse.h"
#include "deleteservicequotaincreaserequestfromtemplaterequest.h"
#include "deleteservicequotaincreaserequestfromtemplateresponse.h"
#include "disassociateservicequotatemplaterequest.h"
#include "disassociateservicequotatemplateresponse.h"
#include "getawsdefaultservicequotarequest.h"
#include "getawsdefaultservicequotaresponse.h"
#include "getassociationforservicequotatemplaterequest.h"
#include "getassociationforservicequotatemplateresponse.h"
#include "getrequestedservicequotachangerequest.h"
#include "getrequestedservicequotachangeresponse.h"
#include "getservicequotarequest.h"
#include "getservicequotaresponse.h"
#include "getservicequotaincreaserequestfromtemplaterequest.h"
#include "getservicequotaincreaserequestfromtemplateresponse.h"
#include "listawsdefaultservicequotasrequest.h"
#include "listawsdefaultservicequotasresponse.h"
#include "listrequestedservicequotachangehistoryrequest.h"
#include "listrequestedservicequotachangehistoryresponse.h"
#include "listrequestedservicequotachangehistorybyquotarequest.h"
#include "listrequestedservicequotachangehistorybyquotaresponse.h"
#include "listservicequotaincreaserequestsintemplaterequest.h"
#include "listservicequotaincreaserequestsintemplateresponse.h"
#include "listservicequotasrequest.h"
#include "listservicequotasresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putservicequotaincreaserequestintotemplaterequest.h"
#include "putservicequotaincreaserequestintotemplateresponse.h"
#include "requestservicequotaincreaserequest.h"
#include "requestservicequotaincreaseresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServiceQuotas
 * \brief Contains classess for accessing Service Quotas.
 *
 * \inmodule QtAwsServiceQuotas
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ServiceQuotasClient
 * \brief The ServiceQuotasClient class provides access to the Service Quotas service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 */

/*!
 * \brief Constructs a ServiceQuotasClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServiceQuotasClient::ServiceQuotasClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-24"),
    QStringLiteral("servicequotas"),
    QStringLiteral("Service Quotas"),
    QStringLiteral("servicequotas"),
    parent), d_ptr(new ServiceQuotasClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ServiceQuotasClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ServiceQuotasClient::ServiceQuotasClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-24"),
    QStringLiteral("servicequotas"),
    QStringLiteral("Service Quotas"),
    QStringLiteral("servicequotas"),
    parent), d_ptr(new ServiceQuotasClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * AssociateServiceQuotaTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates your quota request template with your organization. When a new account is created in your organization, the
 * quota increase requests in the template are automatically applied to the account. You can add a quota increase request
 * for any adjustable quota to your
 */
AssociateServiceQuotaTemplateResponse * ServiceQuotasClient::associateServiceQuotaTemplate(const AssociateServiceQuotaTemplateRequest &request)
{
    return qobject_cast<AssociateServiceQuotaTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * DeleteServiceQuotaIncreaseRequestFromTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the quota increase request for the specified quota from your quota request
 */
DeleteServiceQuotaIncreaseRequestFromTemplateResponse * ServiceQuotasClient::deleteServiceQuotaIncreaseRequestFromTemplate(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &request)
{
    return qobject_cast<DeleteServiceQuotaIncreaseRequestFromTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * DisassociateServiceQuotaTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables your quota request template. After a template is disabled, the quota increase requests in the template are not
 * applied to new accounts in your organization. Disabling a quota request template does not apply its quota increase
 */
DisassociateServiceQuotaTemplateResponse * ServiceQuotasClient::disassociateServiceQuotaTemplate(const DisassociateServiceQuotaTemplateRequest &request)
{
    return qobject_cast<DisassociateServiceQuotaTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * GetAWSDefaultServiceQuotaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the default value for the specified quota. The default value does not reflect any quota
 */
GetAWSDefaultServiceQuotaResponse * ServiceQuotasClient::getAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest &request)
{
    return qobject_cast<GetAWSDefaultServiceQuotaResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * GetAssociationForServiceQuotaTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the status of the association for the quota request
 */
GetAssociationForServiceQuotaTemplateResponse * ServiceQuotasClient::getAssociationForServiceQuotaTemplate(const GetAssociationForServiceQuotaTemplateRequest &request)
{
    return qobject_cast<GetAssociationForServiceQuotaTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * GetRequestedServiceQuotaChangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified quota increase
 */
GetRequestedServiceQuotaChangeResponse * ServiceQuotasClient::getRequestedServiceQuotaChange(const GetRequestedServiceQuotaChangeRequest &request)
{
    return qobject_cast<GetRequestedServiceQuotaChangeResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * GetServiceQuotaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the applied quota value for the specified quota. For some quotas, only the default values are available. If
 * the applied quota value is not available for a quota, the quota is not
 */
GetServiceQuotaResponse * ServiceQuotasClient::getServiceQuota(const GetServiceQuotaRequest &request)
{
    return qobject_cast<GetServiceQuotaResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * GetServiceQuotaIncreaseRequestFromTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified quota increase request in your quota request
 */
GetServiceQuotaIncreaseRequestFromTemplateResponse * ServiceQuotasClient::getServiceQuotaIncreaseRequestFromTemplate(const GetServiceQuotaIncreaseRequestFromTemplateRequest &request)
{
    return qobject_cast<GetServiceQuotaIncreaseRequestFromTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListAWSDefaultServiceQuotasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the default values for the quotas for the specified AWS service. A default value does not reflect any quota
 */
ListAWSDefaultServiceQuotasResponse * ServiceQuotasClient::listAWSDefaultServiceQuotas(const ListAWSDefaultServiceQuotasRequest &request)
{
    return qobject_cast<ListAWSDefaultServiceQuotasResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListRequestedServiceQuotaChangeHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the quota increase requests for the specified
 */
ListRequestedServiceQuotaChangeHistoryResponse * ServiceQuotasClient::listRequestedServiceQuotaChangeHistory(const ListRequestedServiceQuotaChangeHistoryRequest &request)
{
    return qobject_cast<ListRequestedServiceQuotaChangeHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListRequestedServiceQuotaChangeHistoryByQuotaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the quota increase requests for the specified
 */
ListRequestedServiceQuotaChangeHistoryByQuotaResponse * ServiceQuotasClient::listRequestedServiceQuotaChangeHistoryByQuota(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &request)
{
    return qobject_cast<ListRequestedServiceQuotaChangeHistoryByQuotaResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListServiceQuotaIncreaseRequestsInTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the quota increase requests in the specified quota request
 */
ListServiceQuotaIncreaseRequestsInTemplateResponse * ServiceQuotasClient::listServiceQuotaIncreaseRequestsInTemplate(const ListServiceQuotaIncreaseRequestsInTemplateRequest &request)
{
    return qobject_cast<ListServiceQuotaIncreaseRequestsInTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListServiceQuotasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the applied quota values for the specified AWS service. For some quotas, only the default values are available. If
 * the applied quota value is not available for a quota, the quota is not
 */
ListServiceQuotasResponse * ServiceQuotasClient::listServiceQuotas(const ListServiceQuotasRequest &request)
{
    return qobject_cast<ListServiceQuotasResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the names and codes for the services integrated with Service
 */
ListServicesResponse * ServiceQuotasClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags assigned to the specified applied
 */
ListTagsForResourceResponse * ServiceQuotasClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * PutServiceQuotaIncreaseRequestIntoTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a quota increase request to your quota request
 */
PutServiceQuotaIncreaseRequestIntoTemplateResponse * ServiceQuotasClient::putServiceQuotaIncreaseRequestIntoTemplate(const PutServiceQuotaIncreaseRequestIntoTemplateRequest &request)
{
    return qobject_cast<PutServiceQuotaIncreaseRequestIntoTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * RequestServiceQuotaIncreaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits a quota increase request for the specified
 */
RequestServiceQuotaIncreaseResponse * ServiceQuotasClient::requestServiceQuotaIncrease(const RequestServiceQuotaIncreaseRequest &request)
{
    return qobject_cast<RequestServiceQuotaIncreaseResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified applied quota. You can include one or more tags to add to the
 */
TagResourceResponse * ServiceQuotasClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified applied quota. You can specify one or more tags to
 */
UntagResourceResponse * ServiceQuotasClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::ServiceQuotas::ServiceQuotasClientPrivate
 * \brief The ServiceQuotasClientPrivate class provides private implementation for ServiceQuotasClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ServiceQuotasClientPrivate object with public implementation \a q.
 */
ServiceQuotasClientPrivate::ServiceQuotasClientPrivate(ServiceQuotasClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ServiceQuotas
} // namespace QtAws
