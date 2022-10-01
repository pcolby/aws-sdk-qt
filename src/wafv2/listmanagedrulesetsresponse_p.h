// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDRULESETSRESPONSE_P_H
#define QTAWS_LISTMANAGEDRULESETSRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListManagedRuleSetsResponse;

class ListManagedRuleSetsResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListManagedRuleSetsResponsePrivate(ListManagedRuleSetsResponse * const q);

    void parseListManagedRuleSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedRuleSetsResponse)
    Q_DISABLE_COPY(ListManagedRuleSetsResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
