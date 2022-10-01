// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINREQUESTPOLICYRESPONSE_P_H
#define QTAWS_UPDATEORIGINREQUESTPOLICYRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginRequestPolicyResponse;

class UpdateOriginRequestPolicyResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateOriginRequestPolicyResponsePrivate(UpdateOriginRequestPolicyResponse * const q);

    void parseUpdateOriginRequestPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOriginRequestPolicyResponse)
    Q_DISABLE_COPY(UpdateOriginRequestPolicyResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
