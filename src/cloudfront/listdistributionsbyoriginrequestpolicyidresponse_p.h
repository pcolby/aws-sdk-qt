// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYORIGINREQUESTPOLICYIDRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByOriginRequestPolicyIdResponse;

class ListDistributionsByOriginRequestPolicyIdResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByOriginRequestPolicyIdResponsePrivate(ListDistributionsByOriginRequestPolicyIdResponse * const q);

    void parseListDistributionsByOriginRequestPolicyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByOriginRequestPolicyIdResponse)
    Q_DISABLE_COPY(ListDistributionsByOriginRequestPolicyIdResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
