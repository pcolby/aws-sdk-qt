// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYMANAGEMENTCLIENT_H
#define QTAWS_APIGATEWAYMANAGEMENTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapigatewaymanagementglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementClientPrivate;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class PostToConnectionRequest;
class PostToConnectionResponse;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT ApiGatewayManagementClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApiGatewayManagementClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApiGatewayManagementClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    PostToConnectionResponse * postToConnection(const PostToConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(ApiGatewayManagementClient)
    Q_DISABLE_COPY(ApiGatewayManagementClient)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
