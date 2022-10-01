// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERROBOTRESPONSE_P_H
#define QTAWS_DEREGISTERROBOTRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DeregisterRobotResponse;

class DeregisterRobotResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DeregisterRobotResponsePrivate(DeregisterRobotResponse * const q);

    void parseDeregisterRobotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterRobotResponse)
    Q_DISABLE_COPY(DeregisterRobotResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
