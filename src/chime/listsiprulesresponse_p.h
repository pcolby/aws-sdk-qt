// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPRULESRESPONSE_P_H
#define QTAWS_LISTSIPRULESRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListSipRulesResponse;

class ListSipRulesResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListSipRulesResponsePrivate(ListSipRulesResponse * const q);

    void parseListSipRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSipRulesResponse)
    Q_DISABLE_COPY(ListSipRulesResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
