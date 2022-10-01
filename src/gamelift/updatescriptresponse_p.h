// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCRIPTRESPONSE_P_H
#define QTAWS_UPDATESCRIPTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateScriptResponse;

class UpdateScriptResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateScriptResponsePrivate(UpdateScriptResponse * const q);

    void parseUpdateScriptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScriptResponse)
    Q_DISABLE_COPY(UpdateScriptResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
