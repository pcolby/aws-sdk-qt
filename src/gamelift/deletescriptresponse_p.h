// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCRIPTRESPONSE_P_H
#define QTAWS_DELETESCRIPTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteScriptResponse;

class DeleteScriptResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteScriptResponsePrivate(DeleteScriptResponse * const q);

    void parseDeleteScriptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScriptResponse)
    Q_DISABLE_COPY(DeleteScriptResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
