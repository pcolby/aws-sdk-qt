// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYWEBACLIDREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYWEBACLIDREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbywebaclidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByWebACLIdRequest;

class ListDistributionsByWebACLIdRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByWebACLIdRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByWebACLIdRequest * const q);
    ListDistributionsByWebACLIdRequestPrivate(const ListDistributionsByWebACLIdRequestPrivate &other,
                                   ListDistributionsByWebACLIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByWebACLIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
