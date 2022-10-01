// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGECIDRCOLLECTIONREQUEST_P_H
#define QTAWS_CHANGECIDRCOLLECTIONREQUEST_P_H

#include "route53request_p.h"
#include "changecidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class ChangeCidrCollectionRequest;

class ChangeCidrCollectionRequestPrivate : public Route53RequestPrivate {

public:
    ChangeCidrCollectionRequestPrivate(const Route53Request::Action action,
                                   ChangeCidrCollectionRequest * const q);
    ChangeCidrCollectionRequestPrivate(const ChangeCidrCollectionRequestPrivate &other,
                                   ChangeCidrCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeCidrCollectionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
