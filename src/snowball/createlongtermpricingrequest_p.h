// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELONGTERMPRICINGREQUEST_P_H
#define QTAWS_CREATELONGTERMPRICINGREQUEST_P_H

#include "snowballrequest_p.h"
#include "createlongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class CreateLongTermPricingRequest;

class CreateLongTermPricingRequestPrivate : public SnowballRequestPrivate {

public:
    CreateLongTermPricingRequestPrivate(const SnowballRequest::Action action,
                                   CreateLongTermPricingRequest * const q);
    CreateLongTermPricingRequestPrivate(const CreateLongTermPricingRequestPrivate &other,
                                   CreateLongTermPricingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
