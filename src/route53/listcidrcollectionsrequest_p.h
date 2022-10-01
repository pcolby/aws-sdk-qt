// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRCOLLECTIONSREQUEST_P_H
#define QTAWS_LISTCIDRCOLLECTIONSREQUEST_P_H

#include "route53request_p.h"
#include "listcidrcollectionsrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrCollectionsRequest;

class ListCidrCollectionsRequestPrivate : public Route53RequestPrivate {

public:
    ListCidrCollectionsRequestPrivate(const Route53Request::Action action,
                                   ListCidrCollectionsRequest * const q);
    ListCidrCollectionsRequestPrivate(const ListCidrCollectionsRequestPrivate &other,
                                   ListCidrCollectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCidrCollectionsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
