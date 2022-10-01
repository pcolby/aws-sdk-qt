// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYCONFIGREQUEST_P_H
#define QTAWS_GETRESPONSEHEADERSPOLICYCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getresponseheaderspolicyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyConfigRequest;

class GetResponseHeadersPolicyConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetResponseHeadersPolicyConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetResponseHeadersPolicyConfigRequest * const q);
    GetResponseHeadersPolicyConfigRequestPrivate(const GetResponseHeadersPolicyConfigRequestPrivate &other,
                                   GetResponseHeadersPolicyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResponseHeadersPolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
