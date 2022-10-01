// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H
#define QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletecloudfrontoriginaccessidentityrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCloudFrontOriginAccessIdentityRequest;

class DeleteCloudFrontOriginAccessIdentityRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteCloudFrontOriginAccessIdentityRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteCloudFrontOriginAccessIdentityRequest * const q);
    DeleteCloudFrontOriginAccessIdentityRequestPrivate(const DeleteCloudFrontOriginAccessIdentityRequestPrivate &other,
                                   DeleteCloudFrontOriginAccessIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
