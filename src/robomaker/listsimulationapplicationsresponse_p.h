// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTSIMULATIONAPPLICATIONSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationApplicationsResponse;

class ListSimulationApplicationsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListSimulationApplicationsResponsePrivate(ListSimulationApplicationsResponse * const q);

    void parseListSimulationApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSimulationApplicationsResponse)
    Q_DISABLE_COPY(ListSimulationApplicationsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
