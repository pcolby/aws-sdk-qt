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

#ifndef QTAWS_SERVICEQUOTASCLIENT_H
#define QTAWS_SERVICEQUOTASCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasClientPrivate;
class AssociateServiceQuotaTemplateRequest;
class AssociateServiceQuotaTemplateResponse;
class DeleteServiceQuotaIncreaseRequestFromTemplateRequest;
class DeleteServiceQuotaIncreaseRequestFromTemplateResponse;
class DisassociateServiceQuotaTemplateRequest;
class DisassociateServiceQuotaTemplateResponse;
class GetAWSDefaultServiceQuotaRequest;
class GetAWSDefaultServiceQuotaResponse;
class GetAssociationForServiceQuotaTemplateRequest;
class GetAssociationForServiceQuotaTemplateResponse;
class GetRequestedServiceQuotaChangeRequest;
class GetRequestedServiceQuotaChangeResponse;
class GetServiceQuotaRequest;
class GetServiceQuotaResponse;
class GetServiceQuotaIncreaseRequestFromTemplateRequest;
class GetServiceQuotaIncreaseRequestFromTemplateResponse;
class ListAWSDefaultServiceQuotasRequest;
class ListAWSDefaultServiceQuotasResponse;
class ListRequestedServiceQuotaChangeHistoryRequest;
class ListRequestedServiceQuotaChangeHistoryResponse;
class ListRequestedServiceQuotaChangeHistoryByQuotaRequest;
class ListRequestedServiceQuotaChangeHistoryByQuotaResponse;
class ListServiceQuotaIncreaseRequestsInTemplateRequest;
class ListServiceQuotaIncreaseRequestsInTemplateResponse;
class ListServiceQuotasRequest;
class ListServiceQuotasResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutServiceQuotaIncreaseRequestIntoTemplateRequest;
class PutServiceQuotaIncreaseRequestIntoTemplateResponse;
class RequestServiceQuotaIncreaseRequest;
class RequestServiceQuotaIncreaseResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT ServiceQuotasClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServiceQuotasClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServiceQuotasClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateServiceQuotaTemplateResponse * associateServiceQuotaTemplate(const AssociateServiceQuotaTemplateRequest &request);
    DeleteServiceQuotaIncreaseRequestFromTemplateResponse * deleteServiceQuotaIncreaseRequestFromTemplate(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &request);
    DisassociateServiceQuotaTemplateResponse * disassociateServiceQuotaTemplate(const DisassociateServiceQuotaTemplateRequest &request);
    GetAWSDefaultServiceQuotaResponse * getAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest &request);
    GetAssociationForServiceQuotaTemplateResponse * getAssociationForServiceQuotaTemplate(const GetAssociationForServiceQuotaTemplateRequest &request);
    GetRequestedServiceQuotaChangeResponse * getRequestedServiceQuotaChange(const GetRequestedServiceQuotaChangeRequest &request);
    GetServiceQuotaResponse * getServiceQuota(const GetServiceQuotaRequest &request);
    GetServiceQuotaIncreaseRequestFromTemplateResponse * getServiceQuotaIncreaseRequestFromTemplate(const GetServiceQuotaIncreaseRequestFromTemplateRequest &request);
    ListAWSDefaultServiceQuotasResponse * listAWSDefaultServiceQuotas(const ListAWSDefaultServiceQuotasRequest &request);
    ListRequestedServiceQuotaChangeHistoryResponse * listRequestedServiceQuotaChangeHistory(const ListRequestedServiceQuotaChangeHistoryRequest &request);
    ListRequestedServiceQuotaChangeHistoryByQuotaResponse * listRequestedServiceQuotaChangeHistoryByQuota(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &request);
    ListServiceQuotaIncreaseRequestsInTemplateResponse * listServiceQuotaIncreaseRequestsInTemplate(const ListServiceQuotaIncreaseRequestsInTemplateRequest &request);
    ListServiceQuotasResponse * listServiceQuotas(const ListServiceQuotasRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutServiceQuotaIncreaseRequestIntoTemplateResponse * putServiceQuotaIncreaseRequestIntoTemplate(const PutServiceQuotaIncreaseRequestIntoTemplateRequest &request);
    RequestServiceQuotaIncreaseResponse * requestServiceQuotaIncrease(const RequestServiceQuotaIncreaseRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceQuotasClient)
    Q_DISABLE_COPY(ServiceQuotasClient)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
