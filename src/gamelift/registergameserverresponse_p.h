// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERGAMESERVERRESPONSE_P_H
#define QTAWS_REGISTERGAMESERVERRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class RegisterGameServerResponse;

class RegisterGameServerResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit RegisterGameServerResponsePrivate(RegisterGameServerResponse * const q);

    void parseRegisterGameServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterGameServerResponse)
    Q_DISABLE_COPY(RegisterGameServerResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
