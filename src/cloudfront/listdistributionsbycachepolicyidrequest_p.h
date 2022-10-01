// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbycachepolicyidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByCachePolicyIdRequest;

class ListDistributionsByCachePolicyIdRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByCachePolicyIdRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByCachePolicyIdRequest * const q);
    ListDistributionsByCachePolicyIdRequestPrivate(const ListDistributionsByCachePolicyIdRequestPrivate &other,
                                   ListDistributionsByCachePolicyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByCachePolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
