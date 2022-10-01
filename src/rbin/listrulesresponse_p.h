// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_P_H
#define QTAWS_LISTRULESRESPONSE_P_H

#include "rbinresponse_p.h"

namespace QtAws {
namespace Rbin {

class ListRulesResponse;

class ListRulesResponsePrivate : public RbinResponsePrivate {

public:

    explicit ListRulesResponsePrivate(ListRulesResponse * const q);

    void parseListRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponsePrivate)

};

} // namespace Rbin
} // namespace QtAws

#endif
