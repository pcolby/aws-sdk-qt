// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGCLIENT_P_H
#define QTAWS_MARKETPLACEMETERINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringClient;

class MarketplaceMeteringClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MarketplaceMeteringClientPrivate(MarketplaceMeteringClient * const q);

private:
    Q_DECLARE_PUBLIC(MarketplaceMeteringClient)
    Q_DISABLE_COPY(MarketplaceMeteringClientPrivate)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
