// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H
#define QTAWS_DELETECLOUDFRONTORIGINACCESSIDENTITYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteCloudFrontOriginAccessIdentityResponse;

class DeleteCloudFrontOriginAccessIdentityResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteCloudFrontOriginAccessIdentityResponsePrivate(DeleteCloudFrontOriginAccessIdentityResponse * const q);

    void parseDeleteCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCloudFrontOriginAccessIdentityResponse)
    Q_DISABLE_COPY(DeleteCloudFrontOriginAccessIdentityResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
