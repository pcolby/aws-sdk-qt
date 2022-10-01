// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDSRESPONSE_P_H
#define QTAWS_LISTWORLDSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldsResponse;

class ListWorldsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListWorldsResponsePrivate(ListWorldsResponse * const q);

    void parseListWorldsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorldsResponse)
    Q_DISABLE_COPY(ListWorldsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
