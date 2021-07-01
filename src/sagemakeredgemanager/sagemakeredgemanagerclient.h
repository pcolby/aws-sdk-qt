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

#ifndef QTAWS_SAGEMAKEREDGEMANAGERCLIENT_H
#define QTAWS_SAGEMAKEREDGEMANAGERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssagemakeredgemanagerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SagemakerEdgeManager {

class SagemakerEdgeManagerClientPrivate;
class GetDeviceRegistrationRequest;
class GetDeviceRegistrationResponse;
class SendHeartbeatRequest;
class SendHeartbeatResponse;

class QTAWSSAGEMAKEREDGEMANAGER_EXPORT SagemakerEdgeManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SagemakerEdgeManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SagemakerEdgeManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetDeviceRegistrationResponse * getDeviceRegistration(const GetDeviceRegistrationRequest &request);
    SendHeartbeatResponse * sendHeartbeat(const SendHeartbeatRequest &request);

private:
    Q_DECLARE_PRIVATE(SagemakerEdgeManagerClient)
    Q_DISABLE_COPY(SagemakerEdgeManagerClient)

};

} // namespace SagemakerEdgeManager
} // namespace QtAws

#endif
