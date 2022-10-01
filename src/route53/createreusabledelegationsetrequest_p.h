// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREUSABLEDELEGATIONSETREQUEST_P_H
#define QTAWS_CREATEREUSABLEDELEGATIONSETREQUEST_P_H

#include "route53request_p.h"
#include "createreusabledelegationsetrequest.h"

namespace QtAws {
namespace Route53 {

class CreateReusableDelegationSetRequest;

class CreateReusableDelegationSetRequestPrivate : public Route53RequestPrivate {

public:
    CreateReusableDelegationSetRequestPrivate(const Route53Request::Action action,
                                   CreateReusableDelegationSetRequest * const q);
    CreateReusableDelegationSetRequestPrivate(const CreateReusableDelegationSetRequestPrivate &other,
                                   CreateReusableDelegationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReusableDelegationSetRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
