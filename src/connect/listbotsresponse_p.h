// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSRESPONSE_P_H
#define QTAWS_LISTBOTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListBotsResponse;

class ListBotsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListBotsResponsePrivate(ListBotsResponse * const q);

    void parseListBotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBotsResponse)
    Q_DISABLE_COPY(ListBotsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
