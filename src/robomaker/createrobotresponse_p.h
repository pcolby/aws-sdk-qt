// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTRESPONSE_P_H
#define QTAWS_CREATEROBOTRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotResponse;

class CreateRobotResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateRobotResponsePrivate(CreateRobotResponse * const q);

    void parseCreateRobotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRobotResponse)
    Q_DISABLE_COPY(CreateRobotResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
