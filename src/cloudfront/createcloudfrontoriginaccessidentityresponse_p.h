// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H
#define QTAWS_CREATECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateCloudFrontOriginAccessIdentityResponse;

class CreateCloudFrontOriginAccessIdentityResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateCloudFrontOriginAccessIdentityResponsePrivate(CreateCloudFrontOriginAccessIdentityResponse * const q);

    void parseCreateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(CreateCloudFrontOriginAccessIdentityResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
