// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGCLIENT_P_H
#define QTAWS_PRICINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Pricing {

class PricingClient;

class PricingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PricingClientPrivate(PricingClient * const q);

private:
    Q_DECLARE_PUBLIC(PricingClient)
    Q_DISABLE_COPY(PricingClientPrivate)

};

} // namespace Pricing
} // namespace QtAws

#endif
