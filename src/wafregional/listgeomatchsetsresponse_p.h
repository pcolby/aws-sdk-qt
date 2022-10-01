// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSRESPONSE_P_H
#define QTAWS_LISTGEOMATCHSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListGeoMatchSetsResponse;

class ListGeoMatchSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListGeoMatchSetsResponsePrivate(ListGeoMatchSetsResponse * const q);

    void parseListGeoMatchSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeoMatchSetsResponse)
    Q_DISABLE_COPY(ListGeoMatchSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
