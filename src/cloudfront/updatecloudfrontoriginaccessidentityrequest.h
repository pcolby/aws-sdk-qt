// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H
#define QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCloudFrontOriginAccessIdentityRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateCloudFrontOriginAccessIdentityRequest : public CloudFrontRequest {

public:
    UpdateCloudFrontOriginAccessIdentityRequest(const UpdateCloudFrontOriginAccessIdentityRequest &other);
    UpdateCloudFrontOriginAccessIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCloudFrontOriginAccessIdentityRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
