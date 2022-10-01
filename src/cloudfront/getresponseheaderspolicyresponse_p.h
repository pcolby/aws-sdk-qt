// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEHEADERSPOLICYRESPONSE_P_H
#define QTAWS_GETRESPONSEHEADERSPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetResponseHeadersPolicyResponse;

class GetResponseHeadersPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetResponseHeadersPolicyResponsePrivate(GetResponseHeadersPolicyResponse * const q);

    void parseGetResponseHeadersPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResponseHeadersPolicyResponse)
    Q_DISABLE_COPY(GetResponseHeadersPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
