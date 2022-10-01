// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYRESPONSE_P_H
#define QTAWS_GETCACHEPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyResponse;

class GetCachePolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetCachePolicyResponsePrivate(GetCachePolicyResponse * const q);

    void parseGetCachePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCachePolicyResponse)
    Q_DISABLE_COPY(GetCachePolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
