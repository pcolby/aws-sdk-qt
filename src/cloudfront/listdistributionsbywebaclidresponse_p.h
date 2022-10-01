// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYWEBACLIDRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYWEBACLIDRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByWebACLIdResponse;

class ListDistributionsByWebACLIdResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByWebACLIdResponsePrivate(ListDistributionsByWebACLIdResponse * const q);

    void parseListDistributionsByWebACLIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByWebACLIdResponse)
    Q_DISABLE_COPY(ListDistributionsByWebACLIdResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
