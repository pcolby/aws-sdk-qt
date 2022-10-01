// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
