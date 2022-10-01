// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTCLIENT_H
#define QTAWS_MARKETPLACEENTITLEMENTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmarketplaceentitlementglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementClientPrivate;
class GetEntitlementsRequest;
class GetEntitlementsResponse;

class QTAWSMARKETPLACEENTITLEMENT_EXPORT MarketplaceEntitlementClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceEntitlementClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MarketplaceEntitlementClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetEntitlementsResponse * getEntitlements(const GetEntitlementsRequest &request);

private:
    Q_DECLARE_PRIVATE(MarketplaceEntitlementClient)
    Q_DISABLE_COPY(MarketplaceEntitlementClient)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
