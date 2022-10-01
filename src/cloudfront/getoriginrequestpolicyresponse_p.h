// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYRESPONSE_P_H
#define QTAWS_GETORIGINREQUESTPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyResponse;

class GetOriginRequestPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetOriginRequestPolicyResponsePrivate(GetOriginRequestPolicyResponse * const q);

    void parseGetOriginRequestPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOriginRequestPolicyResponse)
    Q_DISABLE_COPY(GetOriginRequestPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
