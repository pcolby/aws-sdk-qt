// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYREQUEST_P_H
#define QTAWS_GETCACHEPOLICYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getcachepolicyrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyRequest;

class GetCachePolicyRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetCachePolicyRequestPrivate(const CloudFrontRequest::Action action,
                                   GetCachePolicyRequest * const q);
    GetCachePolicyRequestPrivate(const GetCachePolicyRequestPrivate &other,
                                   GetCachePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
