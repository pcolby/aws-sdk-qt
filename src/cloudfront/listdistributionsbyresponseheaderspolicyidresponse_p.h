// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYRESPONSEHEADERSPOLICYIDRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByResponseHeadersPolicyIdResponse;

class ListDistributionsByResponseHeadersPolicyIdResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByResponseHeadersPolicyIdResponsePrivate(ListDistributionsByResponseHeadersPolicyIdResponse * const q);

    void parseListDistributionsByResponseHeadersPolicyIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByResponseHeadersPolicyIdResponse)
    Q_DISABLE_COPY(ListDistributionsByResponseHeadersPolicyIdResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
