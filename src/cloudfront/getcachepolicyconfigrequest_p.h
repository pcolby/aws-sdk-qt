// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYCONFIGREQUEST_P_H
#define QTAWS_GETCACHEPOLICYCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getcachepolicyconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyConfigRequest;

class GetCachePolicyConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetCachePolicyConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetCachePolicyConfigRequest * const q);
    GetCachePolicyConfigRequestPrivate(const GetCachePolicyConfigRequestPrivate &other,
                                   GetCachePolicyConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCachePolicyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
