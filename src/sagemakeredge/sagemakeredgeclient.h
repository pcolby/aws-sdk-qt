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
