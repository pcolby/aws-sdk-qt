// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPOLICYRESPONSE_P_H
#define QTAWS_CREATECACHEPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateCachePolicyResponse;

class CreateCachePolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateCachePolicyResponsePrivate(CreateCachePolicyResponse * const q);

    void parseCreateCachePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCachePolicyResponse)
    Q_DISABLE_COPY(CreateCachePolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
