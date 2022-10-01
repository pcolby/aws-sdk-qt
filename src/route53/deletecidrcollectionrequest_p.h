// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECIDRCOLLECTIONREQUEST_P_H
#define QTAWS_DELETECIDRCOLLECTIONREQUEST_P_H

#include "route53request_p.h"
#include "deletecidrcollectionrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteCidrCollectionRequest;

class DeleteCidrCollectionRequestPrivate : public Route53RequestPrivate {

public:
    DeleteCidrCollectionRequestPrivate(const Route53Request::Action action,
                                   DeleteCidrCollectionRequest * const q);
    DeleteCidrCollectionRequestPrivate(const DeleteCidrCollectionRequestPrivate &other,
                                   DeleteCidrCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCidrCollectionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
