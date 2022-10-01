// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BILLINGCONDUCTORCLIENT_P_H
#define QTAWS_BILLINGCONDUCTORCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace BillingConductor {

class BillingConductorClient;

class BillingConductorClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BillingConductorClientPrivate(BillingConductorClient * const q);

private:
    Q_DECLARE_PUBLIC(BillingConductorClient)
    Q_DISABLE_COPY(BillingConductorClientPrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
