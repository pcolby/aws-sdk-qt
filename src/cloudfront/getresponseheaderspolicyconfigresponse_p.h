// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYCONFIGRESPONSE_P_H
#define QTAWS_GETRESPONSEHEADERSPOLICYCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyConfigResponse;

class GetResponseHeadersPolicyConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetResponseHeadersPolicyConfigResponsePrivate(GetResponseHeadersPolicyConfigResponse * const q);

    void parseGetResponseHeadersPolicyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResponseHeadersPolicyConfigResponse)
    Q_DISABLE_COPY(GetResponseHeadersPolicyConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
