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
