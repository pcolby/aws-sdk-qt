// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEROBOTAPPLICATIONVERSIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationVersionResponse;

class CreateRobotApplicationVersionResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateRobotApplicationVersionResponsePrivate(CreateRobotApplicationVersionResponse * const q);

    void parseCreateRobotApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRobotApplicationVersionResponse)
    Q_DISABLE_COPY(CreateRobotApplicationVersionResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
