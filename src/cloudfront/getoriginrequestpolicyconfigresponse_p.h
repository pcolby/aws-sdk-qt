// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINREQUESTPOLICYCONFIGRESPONSE_P_H
#define QTAWS_GETORIGINREQUESTPOLICYCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetOriginRequestPolicyConfigResponse;

class GetOriginRequestPolicyConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetOriginRequestPolicyConfigResponsePrivate(GetOriginRequestPolicyConfigResponse * const q);

    void parseGetOriginRequestPolicyConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOriginRequestPolicyConfigResponse)
    Q_DISABLE_COPY(GetOriginRequestPolicyConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
