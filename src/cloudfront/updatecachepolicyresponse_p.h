// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACHEPOLICYRESPONSE_P_H
#define QTAWS_UPDATECACHEPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateCachePolicyResponse;

class UpdateCachePolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateCachePolicyResponsePrivate(UpdateCachePolicyResponse * const q);

    void parseUpdateCachePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCachePolicyResponse)
    Q_DISABLE_COPY(UpdateCachePolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
