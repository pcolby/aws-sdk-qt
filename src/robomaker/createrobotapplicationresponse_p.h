// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATEROBOTAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationResponse;

class CreateRobotApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateRobotApplicationResponsePrivate(CreateRobotApplicationResponse * const q);

    void parseCreateRobotApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRobotApplicationResponse)
    Q_DISABLE_COPY(CreateRobotApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
