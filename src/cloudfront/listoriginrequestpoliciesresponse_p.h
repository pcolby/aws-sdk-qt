// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINREQUESTPOLICIESRESPONSE_P_H
#define QTAWS_LISTORIGINREQUESTPOLICIESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListOriginRequestPoliciesResponse;

class ListOriginRequestPoliciesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListOriginRequestPoliciesResponsePrivate(ListOriginRequestPoliciesResponse * const q);

    void parseListOriginRequestPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOriginRequestPoliciesResponse)
    Q_DISABLE_COPY(ListOriginRequestPoliciesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
