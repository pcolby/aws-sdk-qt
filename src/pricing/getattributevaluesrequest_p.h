// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEVALUESREQUEST_P_H
#define QTAWS_GETATTRIBUTEVALUESREQUEST_P_H

#include "pricingrequest_p.h"
#include "getattributevaluesrequest.h"

namespace QtAws {
namespace Pricing {

class GetAttributeValuesRequest;

class GetAttributeValuesRequestPrivate : public PricingRequestPrivate {

public:
    GetAttributeValuesRequestPrivate(const PricingRequest::Action action,
                                   GetAttributeValuesRequest * const q);
    GetAttributeValuesRequestPrivate(const GetAttributeValuesRequestPrivate &other,
                                   GetAttributeValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAttributeValuesRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
