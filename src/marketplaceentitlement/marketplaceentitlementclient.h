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
