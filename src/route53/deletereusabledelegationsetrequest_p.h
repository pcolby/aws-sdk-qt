// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREUSABLEDELEGATIONSETREQUEST_P_H
#define QTAWS_DELETEREUSABLEDELEGATIONSETREQUEST_P_H

#include "route53request_p.h"
#include "deletereusabledelegationsetrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteReusableDelegationSetRequest;

class DeleteReusableDelegationSetRequestPrivate : public Route53RequestPrivate {

public:
    DeleteReusableDelegationSetRequestPrivate(const Route53Request::Action action,
                                   DeleteReusableDelegationSetRequest * const q);
    DeleteReusableDelegationSetRequestPrivate(const DeleteReusableDelegationSetRequestPrivate &other,
                                   DeleteReusableDelegationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReusableDelegationSetRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
