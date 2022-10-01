// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmarketplacecommerceanalyticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsClientPrivate;
class GenerateDataSetRequest;
class GenerateDataSetResponse;
class StartSupportDataExportRequest;
class StartSupportDataExportResponse;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT MarketplaceCommerceAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceCommerceAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MarketplaceCommerceAnalyticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GenerateDataSetResponse * generateDataSet(const GenerateDataSetRequest &request);
    StartSupportDataExportResponse * startSupportDataExport(const StartSupportDataExportRequest &request);

private:
    Q_DECLARE_PRIVATE(MarketplaceCommerceAnalyticsClient)
    Q_DISABLE_COPY(MarketplaceCommerceAnalyticsClient)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
