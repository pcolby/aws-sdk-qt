// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H
#define QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatecloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCloudFrontOriginAccessIdentityRequest;

class UpdateCloudFrontOriginAccessIdentityRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateCloudFrontOriginAccessIdentityRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateCloudFrontOriginAccessIdentityRequest * const q);
    UpdateCloudFrontOriginAccessIdentityRequestPrivate(const UpdateCloudFrontOriginAccessIdentityRequestPrivate &other,
                                   UpdateCloudFrontOriginAccessIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
