// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRIPTSRESPONSE_P_H
#define QTAWS_LISTSCRIPTSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ListScriptsResponse;

class ListScriptsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ListScriptsResponsePrivate(ListScriptsResponse * const q);

    void parseListScriptsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListScriptsResponse)
    Q_DISABLE_COPY(ListScriptsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
