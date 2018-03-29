/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsClientPrivate;
class GenerateDataSetRequest;
class GenerateDataSetResponse;
class StartSupportDataExportRequest;
class StartSupportDataExportResponse;

class QTAWS_EXPORT MarketplaceCommerceAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceCommerceAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MarketplaceCommerceAnalyticsClient(
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
