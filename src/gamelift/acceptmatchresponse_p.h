// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTMATCHRESPONSE_P_H
#define QTAWS_ACCEPTMATCHRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class AcceptMatchResponse;

class AcceptMatchResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit AcceptMatchResponsePrivate(AcceptMatchResponse * const q);

    void parseAcceptMatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptMatchResponse)
    Q_DISABLE_COPY(AcceptMatchResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
