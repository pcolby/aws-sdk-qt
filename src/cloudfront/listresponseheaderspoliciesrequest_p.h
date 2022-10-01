// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEHEADERSPOLICIESREQUEST_P_H
#define QTAWS_LISTRESPONSEHEADERSPOLICIESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listresponseheaderspoliciesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListResponseHeadersPoliciesRequest;

class ListResponseHeadersPoliciesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListResponseHeadersPoliciesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListResponseHeadersPoliciesRequest * const q);
    ListResponseHeadersPoliciesRequestPrivate(const ListResponseHeadersPoliciesRequestPrivate &other,
                                   ListResponseHeadersPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResponseHeadersPoliciesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
