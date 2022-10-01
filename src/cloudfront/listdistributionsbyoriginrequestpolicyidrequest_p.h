// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbyoriginrequestpolicyidrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByOriginRequestPolicyIdRequest;

class ListDistributionsByOriginRequestPolicyIdRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByOriginRequestPolicyIdRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByOriginRequestPolicyIdRequest * const q);
    ListDistributionsByOriginRequestPolicyIdRequestPrivate(const ListDistributionsByOriginRequestPolicyIdRequestPrivate &other,
                                   ListDistributionsByOriginRequestPolicyIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByOriginRequestPolicyIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
