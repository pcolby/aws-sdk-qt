// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYKEYGROUPRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYKEYGROUPRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByKeyGroupResponse;

class ListDistributionsByKeyGroupResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByKeyGroupResponsePrivate(ListDistributionsByKeyGroupResponse * const q);

    void parseListDistributionsByKeyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByKeyGroupResponse)
    Q_DISABLE_COPY(ListDistributionsByKeyGroupResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
