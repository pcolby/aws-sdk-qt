// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINREQUESTPOLICYRESPONSE_P_H
#define QTAWS_CREATEORIGINREQUESTPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginRequestPolicyResponse;

class CreateOriginRequestPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateOriginRequestPolicyResponsePrivate(CreateOriginRequestPolicyResponse * const q);

    void parseCreateOriginRequestPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOriginRequestPolicyResponse)
    Q_DISABLE_COPY(CreateOriginRequestPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
