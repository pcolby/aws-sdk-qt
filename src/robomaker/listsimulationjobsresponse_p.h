// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBSRESPONSE_P_H
#define QTAWS_LISTSIMULATIONJOBSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobsResponse;

class ListSimulationJobsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListSimulationJobsResponsePrivate(ListSimulationJobsResponse * const q);

    void parseListSimulationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSimulationJobsResponse)
    Q_DISABLE_COPY(ListSimulationJobsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
