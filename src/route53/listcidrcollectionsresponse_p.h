// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRCOLLECTIONSRESPONSE_P_H
#define QTAWS_LISTCIDRCOLLECTIONSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListCidrCollectionsResponse;

class ListCidrCollectionsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListCidrCollectionsResponsePrivate(ListCidrCollectionsResponse * const q);

    void parseListCidrCollectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCidrCollectionsResponse)
    Q_DISABLE_COPY(ListCidrCollectionsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
