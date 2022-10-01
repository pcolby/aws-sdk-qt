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

#ifndef QTAWS_CONTROLTOWERCLIENT_H
#define QTAWS_CONTROLTOWERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscontroltowerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ControlTower {

class ControlTowerClientPrivate;
class DisableControlRequest;
class DisableControlResponse;
class EnableControlRequest;
class EnableControlResponse;
class GetControlOperationRequest;
class GetControlOperationResponse;
class ListEnabledControlsRequest;
class ListEnabledControlsResponse;

class QTAWSCONTROLTOWER_EXPORT ControlTowerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ControlTowerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ControlTowerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DisableControlResponse * disableControl(const DisableControlRequest &request);
    EnableControlResponse * enableControl(const EnableControlRequest &request);
    GetControlOperationResponse * getControlOperation(const GetControlOperationRequest &request);
    ListEnabledControlsResponse * listEnabledControls(const ListEnabledControlsRequest &request);

private:
    Q_DECLARE_PRIVATE(ControlTowerClient)
    Q_DISABLE_COPY(ControlTowerClient)

};

} // namespace ControlTower
} // namespace QtAws

#endif
