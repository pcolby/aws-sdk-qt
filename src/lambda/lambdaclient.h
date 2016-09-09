/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_LAMBDACLIENT_H
#define QTAWS_LAMBDACLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class LambdaClientPrivate;

class QTAWS_EXPORT LambdaClient : public AwsAbstractClient {
    Q_OBJECT

public:
    LambdaClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LambdaClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    LambdaAddPermissionResponse * addPermission(const LambdaAddPermissionRequest &request);
    LambdaCreateAliasResponse * createAlias(const LambdaCreateAliasRequest &request);
    LambdaCreateEventSourceMappingResponse * createEventSourceMapping(const LambdaCreateEventSourceMappingRequest &request);
    LambdaCreateFunctionResponse * createFunction(const LambdaCreateFunctionRequest &request);
    LambdaDeleteAliasResponse * deleteAlias(const LambdaDeleteAliasRequest &request);
    LambdaDeleteEventSourceMappingResponse * deleteEventSourceMapping(const LambdaDeleteEventSourceMappingRequest &request);
    LambdaDeleteFunctionResponse * deleteFunction(const LambdaDeleteFunctionRequest &request);
    LambdaGetAliasResponse * getAlias(const LambdaGetAliasRequest &request);
    LambdaGetEventSourceMappingResponse * getEventSourceMapping(const LambdaGetEventSourceMappingRequest &request);
    LambdaGetFunctionResponse * getFunction(const LambdaGetFunctionRequest &request);
    LambdaGetFunctionConfigurationResponse * getFunctionConfiguration(const LambdaGetFunctionConfigurationRequest &request);
    LambdaGetPolicyResponse * getPolicy(const LambdaGetPolicyRequest &request);
    LambdaInvokeResponse * invoke(const LambdaInvokeRequest &request);
    LambdaInvokeAsyncResponse * invokeAsync(const LambdaInvokeAsyncRequest &request);
    LambdaListAliasesResponse * listAliases(const LambdaListAliasesRequest &request);
    LambdaListEventSourceMappingsResponse * listEventSourceMappings(const LambdaListEventSourceMappingsRequest &request);
    LambdaListFunctionsResponse * listFunctions(const LambdaListFunctionsRequest &request);
    LambdaListVersionsByFunctionResponse * listVersionsByFunction(const LambdaListVersionsByFunctionRequest &request);
    LambdaPublishVersionResponse * publishVersion(const LambdaPublishVersionRequest &request);
    LambdaRemovePermissionResponse * removePermission(const LambdaRemovePermissionRequest &request);
    LambdaUpdateAliasResponse * updateAlias(const LambdaUpdateAliasRequest &request);
    LambdaUpdateEventSourceMappingResponse * updateEventSourceMapping(const LambdaUpdateEventSourceMappingRequest &request);
    LambdaUpdateFunctionCodeResponse * updateFunctionCode(const LambdaUpdateFunctionCodeRequest &request);
    LambdaUpdateFunctionConfigurationResponse * updateFunctionConfiguration(const LambdaUpdateFunctionConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(LambdaClient)
    Q_DISABLE_COPY(LambdaClient)

};

QTAWS_END_NAMESPACE

#endif
