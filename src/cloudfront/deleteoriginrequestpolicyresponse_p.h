// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINREQUESTPOLICYRESPONSE_P_H
#define QTAWS_DELETEORIGINREQUESTPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginRequestPolicyResponse;

class DeleteOriginRequestPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteOriginRequestPolicyResponsePrivate(DeleteOriginRequestPolicyResponse * const q);

    void parseDeleteOriginRequestPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOriginRequestPolicyResponse)
    Q_DISABLE_COPY(DeleteOriginRequestPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
