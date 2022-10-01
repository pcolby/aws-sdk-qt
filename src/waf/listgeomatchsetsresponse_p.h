// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSRESPONSE_P_H
#define QTAWS_LISTGEOMATCHSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListGeoMatchSetsResponse;

class ListGeoMatchSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListGeoMatchSetsResponsePrivate(ListGeoMatchSetsResponse * const q);

    void parseListGeoMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeoMatchSetsResponse)
    Q_DISABLE_COPY(ListGeoMatchSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
