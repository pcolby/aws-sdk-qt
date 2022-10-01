// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGITEMRESPONSE_P_H
#define QTAWS_GETCATALOGITEMRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetCatalogItemResponse;

class GetCatalogItemResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetCatalogItemResponsePrivate(GetCatalogItemResponse * const q);

    void parseGetCatalogItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCatalogItemResponse)
    Q_DISABLE_COPY(GetCatalogItemResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
