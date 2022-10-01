// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTAPPLICATIONRESPONSE_P_H
#define QTAWS_DELETEROBOTAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotApplicationResponse;

class DeleteRobotApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DeleteRobotApplicationResponsePrivate(DeleteRobotApplicationResponse * const q);

    void parseDeleteRobotApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRobotApplicationResponse)
    Q_DISABLE_COPY(DeleteRobotApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
