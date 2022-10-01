// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_H
#define QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsroute53recoveryclusterglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterClientPrivate;
class GetRoutingControlStateRequest;
class GetRoutingControlStateResponse;
class ListRoutingControlsRequest;
class ListRoutingControlsResponse;
class UpdateRoutingControlStateRequest;
class UpdateRoutingControlStateResponse;
class UpdateRoutingControlStatesRequest;
class UpdateRoutingControlStatesResponse;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT Route53RecoveryClusterClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53RecoveryClusterClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Route53RecoveryClusterClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetRoutingControlStateResponse * getRoutingControlState(const GetRoutingControlStateRequest &request);
    ListRoutingControlsResponse * listRoutingControls(const ListRoutingControlsRequest &request);
    UpdateRoutingControlStateResponse * updateRoutingControlState(const UpdateRoutingControlStateRequest &request);
    UpdateRoutingControlStatesResponse * updateRoutingControlStates(const UpdateRoutingControlStatesRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53RecoveryClusterClient)
    Q_DISABLE_COPY(Route53RecoveryClusterClient)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
