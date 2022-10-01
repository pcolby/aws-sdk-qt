// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRBLOCKSREQUEST_P_H
#define QTAWS_LISTCIDRBLOCKSREQUEST_P_H

#include "route53request_p.h"
#include "listcidrblocksrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrBlocksRequest;

class ListCidrBlocksRequestPrivate : public Route53RequestPrivate {

public:
    ListCidrBlocksRequestPrivate(const Route53Request::Action action,
                                   ListCidrBlocksRequest * const q);
    ListCidrBlocksRequestPrivate(const ListCidrBlocksRequestPrivate &other,
                                   ListCidrBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCidrBlocksRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
