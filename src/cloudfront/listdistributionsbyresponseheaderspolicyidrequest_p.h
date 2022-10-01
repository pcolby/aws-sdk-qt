// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbyresponseheaderspolicyidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByResponseHeadersPolicyIdRequest;

class ListDistributionsByResponseHeadersPolicyIdRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByResponseHeadersPolicyIdRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByResponseHeadersPolicyIdRequest * const q);
    ListDistributionsByResponseHeadersPolicyIdRequestPrivate(const ListDistributionsByResponseHeadersPolicyIdRequestPrivate &other,
                                   ListDistributionsByResponseHeadersPolicyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByResponseHeadersPolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
