// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTACCOUNTASSOCIATIONSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "listaccountassociationsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListAccountAssociationsRequest;

class ListAccountAssociationsRequestPrivate : public BillingConductorRequestPrivate {

public:
    ListAccountAssociationsRequestPrivate(const BillingConductorRequest::Action action,
                                   ListAccountAssociationsRequest * const q);
    ListAccountAssociationsRequestPrivate(const ListAccountAssociationsRequestPrivate &other,
                                   ListAccountAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountAssociationsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
