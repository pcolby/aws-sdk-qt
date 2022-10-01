// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCESRESPONSE_P_H
#define QTAWS_LISTTAGSFORRESOURCESRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTagsForResourcesResponse;

class ListTagsForResourcesResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTagsForResourcesResponsePrivate(ListTagsForResourcesResponse * const q);

    void parseListTagsForResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourcesResponse)
    Q_DISABLE_COPY(ListTagsForResourcesResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
