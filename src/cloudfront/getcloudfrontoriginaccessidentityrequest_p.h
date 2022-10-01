// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getcloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityRequest;

class GetCloudFrontOriginAccessIdentityRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetCloudFrontOriginAccessIdentityRequestPrivate(const CloudFrontRequest::Action action,
                                   GetCloudFrontOriginAccessIdentityRequest * const q);
    GetCloudFrontOriginAccessIdentityRequestPrivate(const GetCloudFrontOriginAccessIdentityRequestPrivate &other,
                                   GetCloudFrontOriginAccessIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
