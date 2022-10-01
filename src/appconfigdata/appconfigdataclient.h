// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGDATACLIENT_H
#define QTAWS_APPCONFIGDATACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappconfigdataglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppConfigData {

class AppConfigDataClientPrivate;
class GetLatestConfigurationRequest;
class GetLatestConfigurationResponse;
class StartConfigurationSessionRequest;
class StartConfigurationSessionResponse;

class QTAWSAPPCONFIGDATA_EXPORT AppConfigDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppConfigDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppConfigDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetLatestConfigurationResponse * getLatestConfiguration(const GetLatestConfigurationRequest &request);
    StartConfigurationSessionResponse * startConfigurationSession(const StartConfigurationSessionRequest &request);

private:
    Q_DECLARE_PRIVATE(AppConfigDataClient)
    Q_DISABLE_COPY(AppConfigDataClient)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
