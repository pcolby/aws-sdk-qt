// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCONFIGCLIENT_H
#define QTAWS_MIGRATIONHUBCONFIGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmigrationhubconfigglobal.h"

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

class QTAWSMIGRATIONHUBCONFIG_EXPORT MigrationHubConfigClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubConfigClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MigrationHubConfigClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateHomeRegionControlResponse * createHomeRegionControl(const CreateHomeRegionControlRequest &request);
    DescribeHomeRegionControlsResponse * describeHomeRegionControls(const DescribeHomeRegionControlsRequest &request);
    GetHomeRegionResponse * getHomeRegion(const GetHomeRegionRequest &request);

private:
    Q_DECLARE_PRIVATE(MigrationHubConfigClient)
    Q_DISABLE_COPY(MigrationHubConfigClient)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
