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

#include "apigatewayrequest.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ApiGatewayRequest
 * \brief The ApiGatewayRequest class provides an interface for ApiGateway requests.
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * \enum ApiGatewayRequest::Action
 *
 * This enum describes the actions that can be performed as ApiGateway
 * requests.
 *
 * \value CreateApiKeyAction ApiGateway CreateApiKey action.
 * \value CreateAuthorizerAction ApiGateway CreateAuthorizer action.
 * \value CreateBasePathMappingAction ApiGateway CreateBasePathMapping action.
 * \value CreateDeploymentAction ApiGateway CreateDeployment action.
 * \value CreateDocumentationPartAction ApiGateway CreateDocumentationPart action.
 * \value CreateDocumentationVersionAction ApiGateway CreateDocumentationVersion action.
 * \value CreateDomainNameAction ApiGateway CreateDomainName action.
 * \value CreateModelAction ApiGateway CreateModel action.
 * \value CreateRequestValidatorAction ApiGateway CreateRequestValidator action.
 * \value CreateResourceAction ApiGateway CreateResource action.
 * \value CreateRestApiAction ApiGateway CreateRestApi action.
 * \value CreateStageAction ApiGateway CreateStage action.
 * \value CreateUsagePlanAction ApiGateway CreateUsagePlan action.
 * \value CreateUsagePlanKeyAction ApiGateway CreateUsagePlanKey action.
 * \value CreateVpcLinkAction ApiGateway CreateVpcLink action.
 * \value DeleteApiKeyAction ApiGateway DeleteApiKey action.
 * \value DeleteAuthorizerAction ApiGateway DeleteAuthorizer action.
 * \value DeleteBasePathMappingAction ApiGateway DeleteBasePathMapping action.
 * \value DeleteClientCertificateAction ApiGateway DeleteClientCertificate action.
 * \value DeleteDeploymentAction ApiGateway DeleteDeployment action.
 * \value DeleteDocumentationPartAction ApiGateway DeleteDocumentationPart action.
 * \value DeleteDocumentationVersionAction ApiGateway DeleteDocumentationVersion action.
 * \value DeleteDomainNameAction ApiGateway DeleteDomainName action.
 * \value DeleteGatewayResponseAction ApiGateway DeleteGatewayResponse action.
 * \value DeleteIntegrationAction ApiGateway DeleteIntegration action.
 * \value DeleteIntegrationResponseAction ApiGateway DeleteIntegrationResponse action.
 * \value DeleteMethodAction ApiGateway DeleteMethod action.
 * \value DeleteMethodResponseAction ApiGateway DeleteMethodResponse action.
 * \value DeleteModelAction ApiGateway DeleteModel action.
 * \value DeleteRequestValidatorAction ApiGateway DeleteRequestValidator action.
 * \value DeleteResourceAction ApiGateway DeleteResource action.
 * \value DeleteRestApiAction ApiGateway DeleteRestApi action.
 * \value DeleteStageAction ApiGateway DeleteStage action.
 * \value DeleteUsagePlanAction ApiGateway DeleteUsagePlan action.
 * \value DeleteUsagePlanKeyAction ApiGateway DeleteUsagePlanKey action.
 * \value DeleteVpcLinkAction ApiGateway DeleteVpcLink action.
 * \value FlushStageAuthorizersCacheAction ApiGateway FlushStageAuthorizersCache action.
 * \value FlushStageCacheAction ApiGateway FlushStageCache action.
 * \value GenerateClientCertificateAction ApiGateway GenerateClientCertificate action.
 * \value GetAccountAction ApiGateway GetAccount action.
 * \value GetApiKeyAction ApiGateway GetApiKey action.
 * \value GetApiKeysAction ApiGateway GetApiKeys action.
 * \value GetAuthorizerAction ApiGateway GetAuthorizer action.
 * \value GetAuthorizersAction ApiGateway GetAuthorizers action.
 * \value GetBasePathMappingAction ApiGateway GetBasePathMapping action.
 * \value GetBasePathMappingsAction ApiGateway GetBasePathMappings action.
 * \value GetClientCertificateAction ApiGateway GetClientCertificate action.
 * \value GetClientCertificatesAction ApiGateway GetClientCertificates action.
 * \value GetDeploymentAction ApiGateway GetDeployment action.
 * \value GetDeploymentsAction ApiGateway GetDeployments action.
 * \value GetDocumentationPartAction ApiGateway GetDocumentationPart action.
 * \value GetDocumentationPartsAction ApiGateway GetDocumentationParts action.
 * \value GetDocumentationVersionAction ApiGateway GetDocumentationVersion action.
 * \value GetDocumentationVersionsAction ApiGateway GetDocumentationVersions action.
 * \value GetDomainNameAction ApiGateway GetDomainName action.
 * \value GetDomainNamesAction ApiGateway GetDomainNames action.
 * \value GetExportAction ApiGateway GetExport action.
 * \value GetGatewayResponseAction ApiGateway GetGatewayResponse action.
 * \value GetGatewayResponsesAction ApiGateway GetGatewayResponses action.
 * \value GetIntegrationAction ApiGateway GetIntegration action.
 * \value GetIntegrationResponseAction ApiGateway GetIntegrationResponse action.
 * \value GetMethodAction ApiGateway GetMethod action.
 * \value GetMethodResponseAction ApiGateway GetMethodResponse action.
 * \value GetModelAction ApiGateway GetModel action.
 * \value GetModelTemplateAction ApiGateway GetModelTemplate action.
 * \value GetModelsAction ApiGateway GetModels action.
 * \value GetRequestValidatorAction ApiGateway GetRequestValidator action.
 * \value GetRequestValidatorsAction ApiGateway GetRequestValidators action.
 * \value GetResourceAction ApiGateway GetResource action.
 * \value GetResourcesAction ApiGateway GetResources action.
 * \value GetRestApiAction ApiGateway GetRestApi action.
 * \value GetRestApisAction ApiGateway GetRestApis action.
 * \value GetSdkAction ApiGateway GetSdk action.
 * \value GetSdkTypeAction ApiGateway GetSdkType action.
 * \value GetSdkTypesAction ApiGateway GetSdkTypes action.
 * \value GetStageAction ApiGateway GetStage action.
 * \value GetStagesAction ApiGateway GetStages action.
 * \value GetTagsAction ApiGateway GetTags action.
 * \value GetUsageAction ApiGateway GetUsage action.
 * \value GetUsagePlanAction ApiGateway GetUsagePlan action.
 * \value GetUsagePlanKeyAction ApiGateway GetUsagePlanKey action.
 * \value GetUsagePlanKeysAction ApiGateway GetUsagePlanKeys action.
 * \value GetUsagePlansAction ApiGateway GetUsagePlans action.
 * \value GetVpcLinkAction ApiGateway GetVpcLink action.
 * \value GetVpcLinksAction ApiGateway GetVpcLinks action.
 * \value ImportApiKeysAction ApiGateway ImportApiKeys action.
 * \value ImportDocumentationPartsAction ApiGateway ImportDocumentationParts action.
 * \value ImportRestApiAction ApiGateway ImportRestApi action.
 * \value PutGatewayResponseAction ApiGateway PutGatewayResponse action.
 * \value PutIntegrationAction ApiGateway PutIntegration action.
 * \value PutIntegrationResponseAction ApiGateway PutIntegrationResponse action.
 * \value PutMethodAction ApiGateway PutMethod action.
 * \value PutMethodResponseAction ApiGateway PutMethodResponse action.
 * \value PutRestApiAction ApiGateway PutRestApi action.
 * \value TagResourceAction ApiGateway TagResource action.
 * \value TestInvokeAuthorizerAction ApiGateway TestInvokeAuthorizer action.
 * \value TestInvokeMethodAction ApiGateway TestInvokeMethod action.
 * \value UntagResourceAction ApiGateway UntagResource action.
 * \value UpdateAccountAction ApiGateway UpdateAccount action.
 * \value UpdateApiKeyAction ApiGateway UpdateApiKey action.
 * \value UpdateAuthorizerAction ApiGateway UpdateAuthorizer action.
 * \value UpdateBasePathMappingAction ApiGateway UpdateBasePathMapping action.
 * \value UpdateClientCertificateAction ApiGateway UpdateClientCertificate action.
 * \value UpdateDeploymentAction ApiGateway UpdateDeployment action.
 * \value UpdateDocumentationPartAction ApiGateway UpdateDocumentationPart action.
 * \value UpdateDocumentationVersionAction ApiGateway UpdateDocumentationVersion action.
 * \value UpdateDomainNameAction ApiGateway UpdateDomainName action.
 * \value UpdateGatewayResponseAction ApiGateway UpdateGatewayResponse action.
 * \value UpdateIntegrationAction ApiGateway UpdateIntegration action.
 * \value UpdateIntegrationResponseAction ApiGateway UpdateIntegrationResponse action.
 * \value UpdateMethodAction ApiGateway UpdateMethod action.
 * \value UpdateMethodResponseAction ApiGateway UpdateMethodResponse action.
 * \value UpdateModelAction ApiGateway UpdateModel action.
 * \value UpdateRequestValidatorAction ApiGateway UpdateRequestValidator action.
 * \value UpdateResourceAction ApiGateway UpdateResource action.
 * \value UpdateRestApiAction ApiGateway UpdateRestApi action.
 * \value UpdateStageAction ApiGateway UpdateStage action.
 * \value UpdateUsageAction ApiGateway UpdateUsage action.
 * \value UpdateUsagePlanAction ApiGateway UpdateUsagePlan action.
 * \value UpdateVpcLinkAction ApiGateway UpdateVpcLink action.
 */

/*!
 * Constructs a ApiGatewayRequest object for ApiGateway \a action.
 */
ApiGatewayRequest::ApiGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ApiGatewayRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApiGatewayRequest::ApiGatewayRequest(const ApiGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ApiGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApiGatewayRequest object to be equal to \a other.
 */
ApiGatewayRequest& ApiGatewayRequest::operator=(const ApiGatewayRequest &other)
{
    Q_D(ApiGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApiGatewayRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayRequestPrivate.
 */
ApiGatewayRequest::ApiGatewayRequest(ApiGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ApiGateway action to be performed by this request.
 */
ApiGatewayRequest::Action ApiGatewayRequest::action() const
{
    Q_D(const ApiGatewayRequest);
    return d->action;
}

/*!
 * Returns the name of the ApiGateway action to be performed by this request.
 */
QString ApiGatewayRequest::actionString() const
{
    return ApiGatewayRequestPrivate::toString(action());
}

/*!
 * Returns the ApiGateway API version implemented by this request.
 */
QString ApiGatewayRequest::apiVersion() const
{
    Q_D(const ApiGatewayRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApiGateway action to be performed by this request to \a action.
 */
void ApiGatewayRequest::setAction(const Action action)
{
    Q_D(ApiGatewayRequest);
    d->action = action;
}

/*!
 * Sets the ApiGateway API version to include in this request to \a version.
 */
void ApiGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(ApiGatewayRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool ApiGatewayRequest::operator==(const ApiGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApiGateway queue name.
 *
 * @par From ApiGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApiGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApiGatewayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApiGatewayRequest::clearParameter(const QString &name)
{
    Q_D(ApiGatewayRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApiGatewayRequest::clearParameters()
{
    Q_D(ApiGatewayRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApiGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApiGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApiGatewayRequest::parameters() const
{
    Q_D(const ApiGatewayRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApiGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApiGatewayRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApiGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApiGatewayRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApiGateway request using the given
 * \a endpoint.
 *
 * This ApiGateway implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApiGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApiGatewayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApiGateway::ApiGatewayRequestPrivate
 * \brief The ApiGatewayRequestPrivate class provides private implementation for ApiGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ApiGatewayRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
ApiGatewayRequestPrivate::ApiGatewayRequestPrivate(const ApiGatewayRequest::Action action, ApiGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-07-09"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApiGatewayRequest class's copy constructor.
 */
ApiGatewayRequestPrivate::ApiGatewayRequestPrivate(const ApiGatewayRequestPrivate &other,
                                     ApiGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApiGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApiGateway service's Action
 * query parameters.
 */
QString ApiGatewayRequestPrivate::toString(const ApiGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case ApiGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApiKey);
        ActionToString(CreateAuthorizer);
        ActionToString(CreateBasePathMapping);
        ActionToString(CreateDeployment);
        ActionToString(CreateDocumentationPart);
        ActionToString(CreateDocumentationVersion);
        ActionToString(CreateDomainName);
        ActionToString(CreateModel);
        ActionToString(CreateRequestValidator);
        ActionToString(CreateResource);
        ActionToString(CreateRestApi);
        ActionToString(CreateStage);
        ActionToString(CreateUsagePlan);
        ActionToString(CreateUsagePlanKey);
        ActionToString(CreateVpcLink);
        ActionToString(DeleteApiKey);
        ActionToString(DeleteAuthorizer);
        ActionToString(DeleteBasePathMapping);
        ActionToString(DeleteClientCertificate);
        ActionToString(DeleteDeployment);
        ActionToString(DeleteDocumentationPart);
        ActionToString(DeleteDocumentationVersion);
        ActionToString(DeleteDomainName);
        ActionToString(DeleteGatewayResponse);
        ActionToString(DeleteIntegration);
        ActionToString(DeleteIntegrationResponse);
        ActionToString(DeleteMethod);
        ActionToString(DeleteMethodResponse);
        ActionToString(DeleteModel);
        ActionToString(DeleteRequestValidator);
        ActionToString(DeleteResource);
        ActionToString(DeleteRestApi);
        ActionToString(DeleteStage);
        ActionToString(DeleteUsagePlan);
        ActionToString(DeleteUsagePlanKey);
        ActionToString(DeleteVpcLink);
        ActionToString(FlushStageAuthorizersCache);
        ActionToString(FlushStageCache);
        ActionToString(GenerateClientCertificate);
        ActionToString(GetAccount);
        ActionToString(GetApiKey);
        ActionToString(GetApiKeys);
        ActionToString(GetAuthorizer);
        ActionToString(GetAuthorizers);
        ActionToString(GetBasePathMapping);
        ActionToString(GetBasePathMappings);
        ActionToString(GetClientCertificate);
        ActionToString(GetClientCertificates);
        ActionToString(GetDeployment);
        ActionToString(GetDeployments);
        ActionToString(GetDocumentationPart);
        ActionToString(GetDocumentationParts);
        ActionToString(GetDocumentationVersion);
        ActionToString(GetDocumentationVersions);
        ActionToString(GetDomainName);
        ActionToString(GetDomainNames);
        ActionToString(GetExport);
        ActionToString(GetGatewayResponse);
        ActionToString(GetGatewayResponses);
        ActionToString(GetIntegration);
        ActionToString(GetIntegrationResponse);
        ActionToString(GetMethod);
        ActionToString(GetMethodResponse);
        ActionToString(GetModel);
        ActionToString(GetModelTemplate);
        ActionToString(GetModels);
        ActionToString(GetRequestValidator);
        ActionToString(GetRequestValidators);
        ActionToString(GetResource);
        ActionToString(GetResources);
        ActionToString(GetRestApi);
        ActionToString(GetRestApis);
        ActionToString(GetSdk);
        ActionToString(GetSdkType);
        ActionToString(GetSdkTypes);
        ActionToString(GetStage);
        ActionToString(GetStages);
        ActionToString(GetTags);
        ActionToString(GetUsage);
        ActionToString(GetUsagePlan);
        ActionToString(GetUsagePlanKey);
        ActionToString(GetUsagePlanKeys);
        ActionToString(GetUsagePlans);
        ActionToString(GetVpcLink);
        ActionToString(GetVpcLinks);
        ActionToString(ImportApiKeys);
        ActionToString(ImportDocumentationParts);
        ActionToString(ImportRestApi);
        ActionToString(PutGatewayResponse);
        ActionToString(PutIntegration);
        ActionToString(PutIntegrationResponse);
        ActionToString(PutMethod);
        ActionToString(PutMethodResponse);
        ActionToString(PutRestApi);
        ActionToString(TagResource);
        ActionToString(TestInvokeAuthorizer);
        ActionToString(TestInvokeMethod);
        ActionToString(UntagResource);
        ActionToString(UpdateAccount);
        ActionToString(UpdateApiKey);
        ActionToString(UpdateAuthorizer);
        ActionToString(UpdateBasePathMapping);
        ActionToString(UpdateClientCertificate);
        ActionToString(UpdateDeployment);
        ActionToString(UpdateDocumentationPart);
        ActionToString(UpdateDocumentationVersion);
        ActionToString(UpdateDomainName);
        ActionToString(UpdateGatewayResponse);
        ActionToString(UpdateIntegration);
        ActionToString(UpdateIntegrationResponse);
        ActionToString(UpdateMethod);
        ActionToString(UpdateMethodResponse);
        ActionToString(UpdateModel);
        ActionToString(UpdateRequestValidator);
        ActionToString(UpdateResource);
        ActionToString(UpdateRestApi);
        ActionToString(UpdateStage);
        ActionToString(UpdateUsage);
        ActionToString(UpdateUsagePlan);
        ActionToString(UpdateVpcLink);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApiGateway
} // namespace QtAws
