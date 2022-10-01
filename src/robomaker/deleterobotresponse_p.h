// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTRESPONSE_P_H
#define QTAWS_DELETEROBOTRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotResponse;

class DeleteRobotResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DeleteRobotResponsePrivate(DeleteRobotResponse * const q);

    void parseDeleteRobotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRobotResponse)
    Q_DISABLE_COPY(DeleteRobotResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
