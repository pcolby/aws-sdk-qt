// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROBOTAPPLICATIONRESPONSE_P_H
#define QTAWS_UPDATEROBOTAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class UpdateRobotApplicationResponse;

class UpdateRobotApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit UpdateRobotApplicationResponsePrivate(UpdateRobotApplicationResponse * const q);

    void parseUpdateRobotApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRobotApplicationResponse)
    Q_DISABLE_COPY(UpdateRobotApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
