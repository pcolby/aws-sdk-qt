// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTSRESPONSE_P_H
#define QTAWS_LISTROBOTSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotsResponse;

class ListRobotsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListRobotsResponsePrivate(ListRobotsResponse * const q);

    void parseListRobotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRobotsResponse)
    Q_DISABLE_COPY(ListRobotsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
