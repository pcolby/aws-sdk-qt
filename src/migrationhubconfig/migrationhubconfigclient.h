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

#ifndef QTAWS_MIGRATIONHUBCONFIGCLIENT_H
#define QTAWS_MIGRATIONHUBCONFIGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MigrationHubConfig {

class MigrationHubConfigClientPrivate;
class CreateHomeRegionControlRequest;
class CreateHomeRegionControlResponse;
class DescribeHomeRegionControlsRequest;
class DescribeHomeRegionControlsResponse;
class GetHomeRegionRequest;
class GetHomeRegionResponse;

class QTAWS_EXPORT MigrationHubConfigClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubConfigClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MigrationHubConfigClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateHomeRegionControlResponse * createHomeRegionControl(const CreateHomeRegionControlRequest &request);
    DescribeHomeRegionControlsResponse * describeHomeRegionControls(const DescribeHomeRegionControlsRequest &request);
    GetHomeRegionResponse * getHomeRegion(const GetHomeRegionRequest &request);

protected:
    /// @cond internal
    MigrationHubConfigClientPrivate * const d_ptr; ///< Internal d-pointer.
    MigrationHubConfigClient(MigrationHubConfigClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MigrationHubConfigClient)
    Q_DISABLE_COPY(MigrationHubConfigClient)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
