// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPOLICYRESPONSE_P_H
#define QTAWS_DELETECACHEPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteCachePolicyResponse;

class DeleteCachePolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteCachePolicyResponsePrivate(DeleteCachePolicyResponse * const q);

    void parseDeleteCachePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCachePolicyResponse)
    Q_DISABLE_COPY(DeleteCachePolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
