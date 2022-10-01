// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityResponse;

class GetCloudFrontOriginAccessIdentityResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetCloudFrontOriginAccessIdentityResponsePrivate(GetCloudFrontOriginAccessIdentityResponse * const q);

    void parseGetCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(GetCloudFrontOriginAccessIdentityResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
