// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsResponse;

class ListDistributionsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsResponsePrivate(ListDistributionsResponse * const q);

    void parseListDistributionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsResponse)
    Q_DISABLE_COPY(ListDistributionsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
