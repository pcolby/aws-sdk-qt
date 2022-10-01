// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGCLIENT_H
#define QTAWS_MARKETPLACEMETERINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmarketplacemeteringglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringClientPrivate;
class BatchMeterUsageRequest;
class BatchMeterUsageResponse;
class MeterUsageRequest;
class MeterUsageResponse;
class RegisterUsageRequest;
class RegisterUsageResponse;
class ResolveCustomerRequest;
class ResolveCustomerResponse;

class QTAWSMARKETPLACEMETERING_EXPORT MarketplaceMeteringClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceMeteringClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MarketplaceMeteringClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchMeterUsageResponse * batchMeterUsage(const BatchMeterUsageRequest &request);
    MeterUsageResponse * meterUsage(const MeterUsageRequest &request);
    RegisterUsageResponse * registerUsage(const RegisterUsageRequest &request);
    ResolveCustomerResponse * resolveCustomer(const ResolveCustomerRequest &request);

private:
    Q_DECLARE_PRIVATE(MarketplaceMeteringClient)
    Q_DISABLE_COPY(MarketplaceMeteringClient)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
