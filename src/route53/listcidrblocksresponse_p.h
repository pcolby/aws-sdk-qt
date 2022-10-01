// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRBLOCKSRESPONSE_P_H
#define QTAWS_LISTCIDRBLOCKSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListCidrBlocksResponse;

class ListCidrBlocksResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListCidrBlocksResponsePrivate(ListCidrBlocksResponse * const q);

    void parseListCidrBlocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCidrBlocksResponse)
    Q_DISABLE_COPY(ListCidrBlocksResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
