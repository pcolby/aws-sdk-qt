// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLONGTERMPRICINGREQUEST_P_H
#define QTAWS_LISTLONGTERMPRICINGREQUEST_P_H

#include "snowballrequest_p.h"
#include "listlongtermpricingrequest.h"

namespace QtAws {
namespace Snowball {

class ListLongTermPricingRequest;

class ListLongTermPricingRequestPrivate : public SnowballRequestPrivate {

public:
    ListLongTermPricingRequestPrivate(const SnowballRequest::Action action,
                                   ListLongTermPricingRequest * const q);
    ListLongTermPricingRequestPrivate(const ListLongTermPricingRequestPrivate &other,
                                   ListLongTermPricingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
