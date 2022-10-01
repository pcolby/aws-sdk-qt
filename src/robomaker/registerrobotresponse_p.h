// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERROBOTRESPONSE_P_H
#define QTAWS_REGISTERROBOTRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class RegisterRobotResponse;

class RegisterRobotResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit RegisterRobotResponsePrivate(RegisterRobotResponse * const q);

    void parseRegisterRobotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterRobotResponse)
    Q_DISABLE_COPY(RegisterRobotResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
