// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGRESPONSE_P_H
#define QTAWS_GETCLOUDFRONTORIGINACCESSIDENTITYCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetCloudFrontOriginAccessIdentityConfigResponse;

class GetCloudFrontOriginAccessIdentityConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetCloudFrontOriginAccessIdentityConfigResponsePrivate(GetCloudFrontOriginAccessIdentityConfigResponse * const q);

    void parseGetCloudFrontOriginAccessIdentityConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCloudFrontOriginAccessIdentityConfigResponse)
    Q_DISABLE_COPY(GetCloudFrontOriginAccessIdentityConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
