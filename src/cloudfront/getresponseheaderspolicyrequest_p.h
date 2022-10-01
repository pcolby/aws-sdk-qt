// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYREQUEST_P_H
#define QTAWS_GETRESPONSEHEADERSPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getresponseheaderspolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyRequest;

class GetResponseHeadersPolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetResponseHeadersPolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   GetResponseHeadersPolicyRequest * const q);
    GetResponseHeadersPolicyRequestPrivate(const GetResponseHeadersPolicyRequestPrivate &other,
                                   GetResponseHeadersPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResponseHeadersPolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
