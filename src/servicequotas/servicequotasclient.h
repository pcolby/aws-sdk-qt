// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASCLIENT_H
#define QTAWS_SERVICEQUOTASCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsservicequotasglobal.h"

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

class QTAWSSERVICEQUOTAS_EXPORT ServiceQuotasClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServiceQuotasClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ServiceQuotasClient(
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
