// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECIDRCOLLECTIONREQUEST_P_H
#define QTAWS_CREATECIDRCOLLECTIONREQUEST_P_H

#include "route53request_p.h"
#include "createcidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class CreateCidrCollectionRequest;

class CreateCidrCollectionRequestPrivate : public Route53RequestPrivate {

public:
    CreateCidrCollectionRequestPrivate(const Route53Request::Action action,
                                   CreateCidrCollectionRequest * const q);
    CreateCidrCollectionRequestPrivate(const CreateCidrCollectionRequestPrivate &other,
                                   CreateCidrCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCidrCollectionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
