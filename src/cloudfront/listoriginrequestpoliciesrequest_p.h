// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINREQUESTPOLICIESREQUEST_P_H
#define QTAWS_LISTORIGINREQUESTPOLICIESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listoriginrequestpoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginRequestPoliciesRequest;

class ListOriginRequestPoliciesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListOriginRequestPoliciesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListOriginRequestPoliciesRequest * const q);
    ListOriginRequestPoliciesRequestPrivate(const ListOriginRequestPoliciesRequestPrivate &other,
                                   ListOriginRequestPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOriginRequestPoliciesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
