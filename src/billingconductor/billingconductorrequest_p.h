// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BILLINGCONDUCTORREQUEST_P_H
#define QTAWS_BILLINGCONDUCTORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class BillingConductorRequest;

class BillingConductorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BillingConductorRequest::Action action; ///< BillingConductor action to be performed.
    QString apiVersion;        ///< BillingConductor API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< BillingConductor request (query string) parameters. @todo?

    BillingConductorRequestPrivate(const BillingConductorRequest::Action action, BillingConductorRequest * const q);
    BillingConductorRequestPrivate(const BillingConductorRequestPrivate &other, BillingConductorRequest * const q);

    static QString toString(const BillingConductorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BillingConductorRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
