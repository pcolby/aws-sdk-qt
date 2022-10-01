// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIZECONSTRAINTSETSRESPONSE_P_H
#define QTAWS_LISTSIZECONSTRAINTSETSRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class ListSizeConstraintSetsResponse;

class ListSizeConstraintSetsResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit ListSizeConstraintSetsResponsePrivate(ListSizeConstraintSetsResponse * const q);

    void parseListSizeConstraintSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSizeConstraintSetsResponse)
    Q_DISABLE_COPY(ListSizeConstraintSetsResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
