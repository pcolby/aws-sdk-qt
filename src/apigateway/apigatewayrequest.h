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

#ifndef QTAWS_APIGATEWAYREQUEST_H
#define QTAWS_APIGATEWAYREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace APIGateway {

class APIGatewayRequestPrivate;

class QTAWS_EXPORT APIGatewayRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by APIGateway.
    enum Action {
        CreateApiKeyAction,
        CreateAuthorizerAction,
        CreateBasePathMappingAction,
        CreateDeploymentAction,
        CreateDocumentationPartAction,
        CreateDocumentationVersionAction,
        CreateDomainNameAction,
        CreateModelAction,
        CreateRequestValidatorAction,
        CreateResourceAction,
        CreateRestApiAction,
        CreateStageAction,
        CreateUsagePlanAction,
        CreateUsagePlanKeyAction,
        CreateVpcLinkAction,
        DeleteApiKeyAction,
        DeleteAuthorizerAction,
        DeleteBasePathMappingAction,
        DeleteClientCertificateAction,
        DeleteDeploymentAction,
        DeleteDocumentationPartAction,
        DeleteDocumentationVersionAction,
        DeleteDomainNameAction,
        DeleteGatewayResponseAction,
        DeleteIntegrationAction,
        DeleteIntegrationResponseAction,
        DeleteMethodAction,
        DeleteMethodResponseAction,
        DeleteModelAction,
        DeleteRequestValidatorAction,
        DeleteResourceAction,
        DeleteRestApiAction,
        DeleteStageAction,
        DeleteUsagePlanAction,
        DeleteUsagePlanKeyAction,
        DeleteVpcLinkAction,
        FlushStageAuthorizersCacheAction,
        FlushStageCacheAction,
        GenerateClientCertificateAction,
        GetAccountAction,
        GetApiKeyAction,
        GetApiKeysAction,
        GetAuthorizerAction,
        GetAuthorizersAction,
        GetBasePathMappingAction,
        GetBasePathMappingsAction,
        GetClientCertificateAction,
        GetClientCertificatesAction,
        GetDeploymentAction,
        GetDeploymentsAction,
        GetDocumentationPartAction,
        GetDocumentationPartsAction,
        GetDocumentationVersionAction,
        GetDocumentationVersionsAction,
        GetDomainNameAction,
        GetDomainNamesAction,
        GetExportAction,
        GetGatewayResponseAction,
        GetGatewayResponsesAction,
        GetIntegrationAction,
        GetIntegrationResponseAction,
        GetMethodAction,
        GetMethodResponseAction,
        GetModelAction,
        GetModelTemplateAction,
        GetModelsAction,
        GetRequestValidatorAction,
        GetRequestValidatorsAction,
        GetResourceAction,
        GetResourcesAction,
        GetRestApiAction,
        GetRestApisAction,
        GetSdkAction,
        GetSdkTypeAction,
        GetSdkTypesAction,
        GetStageAction,
        GetStagesAction,
        GetTagsAction,
        GetUsageAction,
        GetUsagePlanAction,
        GetUsagePlanKeyAction,
        GetUsagePlanKeysAction,
        GetUsagePlansAction,
        GetVpcLinkAction,
        GetVpcLinksAction,
        ImportApiKeysAction,
        ImportDocumentationPartsAction,
        ImportRestApiAction,
        PutGatewayResponseAction,
        PutIntegrationAction,
        PutIntegrationResponseAction,
        PutMethodAction,
        PutMethodResponseAction,
        PutRestApiAction,
        TagResourceAction,
        TestInvokeAuthorizerAction,
        TestInvokeMethodAction,
        UntagResourceAction,
        UpdateAccountAction,
        UpdateApiKeyAction,
        UpdateAuthorizerAction,
        UpdateBasePathMappingAction,
        UpdateClientCertificateAction,
        UpdateDeploymentAction,
        UpdateDocumentationPartAction,
        UpdateDocumentationVersionAction,
        UpdateDomainNameAction,
        UpdateGatewayResponseAction,
        UpdateIntegrationAction,
        UpdateIntegrationResponseAction,
        UpdateMethodAction,
        UpdateMethodResponseAction,
        UpdateModelAction,
        UpdateRequestValidatorAction,
        UpdateResourceAction,
        UpdateRestApiAction,
        UpdateStageAction,
        UpdateUsageAction,
        UpdateUsagePlanAction,
        UpdateVpcLinkAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    APIGatewayRequest(const Action action);
    APIGatewayRequest(const APIGatewayRequest &other);
    APIGatewayRequest &operator=(const APIGatewayRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const APIGatewayRequest &other) const;


protected:
    /// @cond internal
    APIGatewayRequest(APIGatewayRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(APIGatewayRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
