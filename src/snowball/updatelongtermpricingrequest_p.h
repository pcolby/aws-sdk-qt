// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELONGTERMPRICINGREQUEST_P_H
#define QTAWS_UPDATELONGTERMPRICINGREQUEST_P_H

#include "snowballrequest_p.h"
#include "updatelongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateLongTermPricingRequest;

class UpdateLongTermPricingRequestPrivate : public SnowballRequestPrivate {

public:
    UpdateLongTermPricingRequestPrivate(const SnowballRequest::Action action,
                                   UpdateLongTermPricingRequest * const q);
    UpdateLongTermPricingRequestPrivate(const UpdateLongTermPricingRequestPrivate &other,
                                   UpdateLongTermPricingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
