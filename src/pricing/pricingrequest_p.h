// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGREQUEST_P_H
#define QTAWS_PRICINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pricingrequest.h"

namespace QtAws {
namespace Pricing {

class PricingRequest;

class PricingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PricingRequest::Action action; ///< Pricing action to be performed.
    QString apiVersion;        ///< Pricing API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pricing request (query string) parameters. @todo?

    PricingRequestPrivate(const PricingRequest::Action action, PricingRequest * const q);
    PricingRequestPrivate(const PricingRequestPrivate &other, PricingRequest * const q);

    static QString toString(const PricingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PricingRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
