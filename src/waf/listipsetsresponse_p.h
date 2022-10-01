// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSRESPONSE_P_H
#define QTAWS_LISTIPSETSRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class ListIPSetsResponse;

class ListIPSetsResponsePrivate : public WafResponsePrivate {

public:

    explicit ListIPSetsResponsePrivate(ListIPSetsResponse * const q);

    void parseListIPSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIPSetsResponse)
    Q_DISABLE_COPY(ListIPSetsResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
