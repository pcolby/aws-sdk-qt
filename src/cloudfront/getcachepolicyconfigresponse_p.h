// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCACHEPOLICYCONFIGRESPONSE_P_H
#define QTAWS_GETCACHEPOLICYCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetCachePolicyConfigResponse;

class GetCachePolicyConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetCachePolicyConfigResponsePrivate(GetCachePolicyConfigResponse * const q);

    void parseGetCachePolicyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCachePolicyConfigResponse)
    Q_DISABLE_COPY(GetCachePolicyConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
