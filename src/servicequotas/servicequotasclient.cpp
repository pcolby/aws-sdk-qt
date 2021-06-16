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
#include "putservicequotaincreaserequestintotemplaterequest.h"
#include "putservicequotaincreaserequestintotemplateresponse.h"
#include "requestservicequotaincreaserequest.h"
#include "requestservicequotaincreaseresponse.h"

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
 *  Service Quotas is a web service that you can use to manage many of your AWS service quotas. Quotas, also referred to as
 *  limits, are the maximum values for a resource, item, or operation. This guide provide descriptions of the Service Quotas
 *  actions that you can call from an API. For the Service Quotas user guide, which explains how to use Service Quotas from
 *  the console, see <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What is Service
 *  Quotas</a>.
 * 
 *  </p <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for programming languages and platforms (Java, Ruby, .NET,
 *  iOS, Android, etc...,). The SDKs provide a convenient way to create programmatic access to Service Quotas and AWS. For
 *  information about the AWS SDKs, including how to download and install them, see the <a
 *  href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web Services</a>
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
: QtAws::Core::AwsAbstractClient(new ServiceQuotasClientPrivate(this), parent)
{
    Q_D(ServiceQuotasClient);
    d->apiVersion = QStringLiteral("2019-06-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("servicequotas");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Service Quotas");
    d->serviceName = QStringLiteral("servicequotas");
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
: QtAws::Core::AwsAbstractClient(new ServiceQuotasClientPrivate(this), parent)
{
    Q_D(ServiceQuotasClient);
    d->apiVersion = QStringLiteral("2019-06-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("servicequotas");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Service Quotas");
    d->serviceName = QStringLiteral("servicequotas");
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * AssociateServiceQuotaTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the Service Quotas template with your organization so that when new accounts are created in your
 * organization, the template submits increase requests for the specified service quotas. Use the Service Quotas template
 * to request an increase for any adjustable quota value. After you define the Service Quotas template, use this operation
 * to associate, or enable, the template.
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
 * Removes a service quota increase request from the Service Quotas template.
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
 * Disables the Service Quotas template. Once the template is disabled, it does not request quota increases for new
 * accounts in your organization. Disabling the quota template does not apply the quota increase requests from the
 * template.
 *
 * </p
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To enable the quota template, call <a>AssociateServiceQuotaTemplate</a>.
 *
 * </p </li> <li>
 *
 * To delete a specific service quota from the template, use
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
 * Retrieves the default service quotas values. The Value returned for each quota is the AWS default value, even if the
 * quotas have been increased..
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
 * Retrieves the <code>ServiceQuotaTemplateAssociationStatus</code> value from the service. Use this action to determine if
 * the Service Quota template is associated, or enabled.
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
 * Retrieves the details for a particular increase request.
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
 * Returns the details for the specified service quota. This operation provides a different Value than the
 * <code>GetAWSDefaultServiceQuota</code> operation. This operation returns the applied value for each quota.
 * <code>GetAWSDefaultServiceQuota</code> returns the default AWS value for each quota.
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
 * Returns the details of the service quota increase request in your
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
 * Lists all default service quotas for the specified AWS service or all AWS services. ListAWSDefaultServiceQuotas is
 * similar to <a>ListServiceQuotas</a> except for the Value object. The Value object returned by
 * <code>ListAWSDefaultServiceQuotas</code> is the default value assigned by AWS. This request returns a list of all
 * service quotas for the specified service. The listing of each you'll see the default values are the values that AWS
 * provides for the quotas.
 *
 * </p <note>
 *
 * Always check the <code>NextToken</code> response parameter when calling any of the <code>List*</code> operations. These
 * operations can return an unexpected list of results, even when there are more results available. When this happens, the
 * <code>NextToken</code> response parameter contains a value to pass the next call to the same API to request the next
 * part of the
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
 * Requests a list of the changes to quotas for a
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
 * Requests a list of the changes to specific service quotas. This command provides additional granularity over the
 * <code>ListRequestedServiceQuotaChangeHistory</code> command. Once a quota change request has reached <code>CASE_CLOSED,
 * APPROVED,</code> or <code>DENIED</code>, the history has been kept for 90
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
 * Returns a list of the quota increase requests in the template.
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
 * Lists all service quotas for the specified AWS service. This request returns a list of the service quotas for the
 * specified service. you'll see the default values are the values that AWS provides for the quotas.
 *
 * </p <note>
 *
 * Always check the <code>NextToken</code> response parameter when calling any of the <code>List*</code> operations. These
 * operations can return an unexpected list of results, even when there are more results available. When this happens, the
 * <code>NextToken</code> response parameter contains a value to pass the next call to the same API to request the next
 * part of the
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
 * Lists the AWS services available in Service Quotas. Not all AWS services are available in Service Quotas. To list the
 * see the list of the service quotas for a specific service, use
 */
ListServicesResponse * ServiceQuotasClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceQuotasClient service, and returns a pointer to an
 * PutServiceQuotaIncreaseRequestIntoTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines and adds a quota to the service quota template. To add a quota to the template, you must provide the
 * <code>ServiceCode</code>, <code>QuotaCode</code>, <code>AwsRegion</code>, and <code>DesiredValue</code>. Once you add a
 * quota to the template, use <a>ListServiceQuotaIncreaseRequestsInTemplate</a> to see the list of quotas in the
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
 * Retrieves the details of a service quota increase request. The response to this command provides the details in the
 * <a>RequestedServiceQuotaChange</a> object.
 */
RequestServiceQuotaIncreaseResponse * ServiceQuotasClient::requestServiceQuotaIncrease(const RequestServiceQuotaIncreaseRequest &request)
{
    return qobject_cast<RequestServiceQuotaIncreaseResponse *>(send(request));
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
ServiceQuotasClientPrivate::ServiceQuotasClientPrivate(ServiceQuotasClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ServiceQuotas
} // namespace QtAws
