// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H
#define QTAWS_UPDATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateCloudFrontOriginAccessIdentityResponse;

class UpdateCloudFrontOriginAccessIdentityResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateCloudFrontOriginAccessIdentityResponsePrivate(UpdateCloudFrontOriginAccessIdentityResponse * const q);

    void parseUpdateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(UpdateCloudFrontOriginAccessIdentityResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
