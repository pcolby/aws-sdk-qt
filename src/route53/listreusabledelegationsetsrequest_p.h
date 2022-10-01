// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREUSABLEDELEGATIONSETSREQUEST_P_H
#define QTAWS_LISTREUSABLEDELEGATIONSETSREQUEST_P_H

#include "route53request_p.h"
#include "listreusabledelegationsetsrequest.h"

namespace QtAws {
namespace Route53 {

class ListReusableDelegationSetsRequest;

class ListReusableDelegationSetsRequestPrivate : public Route53RequestPrivate {

public:
    ListReusableDelegationSetsRequestPrivate(const Route53Request::Action action,
                                   ListReusableDelegationSetsRequest * const q);
    ListReusableDelegationSetsRequestPrivate(const ListReusableDelegationSetsRequestPrivate &other,
                                   ListReusableDelegationSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReusableDelegationSetsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
