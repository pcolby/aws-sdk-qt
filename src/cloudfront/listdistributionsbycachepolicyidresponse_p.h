// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYCACHEPOLICYIDRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByCachePolicyIdResponse;

class ListDistributionsByCachePolicyIdResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByCachePolicyIdResponsePrivate(ListDistributionsByCachePolicyIdResponse * const q);

    void parseListDistributionsByCachePolicyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByCachePolicyIdResponse)
    Q_DISABLE_COPY(ListDistributionsByCachePolicyIdResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
