// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUICKCONNECTSRESPONSE_P_H
#define QTAWS_LISTQUICKCONNECTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListQuickConnectsResponse;

class ListQuickConnectsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListQuickConnectsResponsePrivate(ListQuickConnectsResponse * const q);

    void parseListQuickConnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQuickConnectsResponse)
    Q_DISABLE_COPY(ListQuickConnectsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
