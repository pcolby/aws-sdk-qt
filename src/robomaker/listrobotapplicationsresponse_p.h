// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTROBOTAPPLICATIONSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotApplicationsResponse;

class ListRobotApplicationsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListRobotApplicationsResponsePrivate(ListRobotApplicationsResponse * const q);

    void parseListRobotApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRobotApplicationsResponse)
    Q_DISABLE_COPY(ListRobotApplicationsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
