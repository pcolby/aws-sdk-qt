// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACKSRESPONSE_P_H
#define QTAWS_LISTATTACKSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class ListAttacksResponse;

class ListAttacksResponsePrivate : public ShieldResponsePrivate {

public:

    explicit ListAttacksResponsePrivate(ListAttacksResponse * const q);

    void parseListAttacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttacksResponse)
    Q_DISABLE_COPY(ListAttacksResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
