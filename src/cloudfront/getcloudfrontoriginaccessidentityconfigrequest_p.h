// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGREQUEST_P_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getcloudfrontoriginaccessidentityconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityConfigRequest;

class GetCloudFrontOriginAccessIdentityConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetCloudFrontOriginAccessIdentityConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetCloudFrontOriginAccessIdentityConfigRequest * const q);
    GetCloudFrontOriginAccessIdentityConfigRequestPrivate(const GetCloudFrontOriginAccessIdentityConfigRequestPrivate &other,
                                   GetCloudFrontOriginAccessIdentityConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCloudFrontOriginAccessIdentityConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
