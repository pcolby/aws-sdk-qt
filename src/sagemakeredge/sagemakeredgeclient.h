// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGECLIENT_H
#define QTAWS_SAGEMAKEREDGECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssagemakeredgeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeClientPrivate;
class GetDeploymentsRequest;
class GetDeploymentsResponse;
class GetDeviceRegistrationRequest;
class GetDeviceRegistrationResponse;
class SendHeartbeatRequest;
class SendHeartbeatResponse;

class QTAWSSAGEMAKEREDGE_EXPORT SagemakerEdgeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SagemakerEdgeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SagemakerEdgeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetDeploymentsResponse * getDeployments(const GetDeploymentsRequest &request);
    GetDeviceRegistrationResponse * getDeviceRegistration(const GetDeviceRegistrationRequest &request);
    SendHeartbeatResponse * sendHeartbeat(const SendHeartbeatRequest &request);

private:
    Q_DECLARE_PRIVATE(SagemakerEdgeClient)
    Q_DISABLE_COPY(SagemakerEdgeClient)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
