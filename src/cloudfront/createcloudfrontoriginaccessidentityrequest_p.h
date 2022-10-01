// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H
#define QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createcloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCloudFrontOriginAccessIdentityRequest;

class CreateCloudFrontOriginAccessIdentityRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateCloudFrontOriginAccessIdentityRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateCloudFrontOriginAccessIdentityRequest * const q);
    CreateCloudFrontOriginAccessIdentityRequestPrivate(const CreateCloudFrontOriginAccessIdentityRequestPrivate &other,
                                   CreateCloudFrontOriginAccessIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
