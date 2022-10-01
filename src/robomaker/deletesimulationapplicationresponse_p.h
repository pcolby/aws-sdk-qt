// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIMULATIONAPPLICATIONRESPONSE_P_H
#define QTAWS_DELETESIMULATIONAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DeleteSimulationApplicationResponse;

class DeleteSimulationApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DeleteSimulationApplicationResponsePrivate(DeleteSimulationApplicationResponse * const q);

    void parseDeleteSimulationApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSimulationApplicationResponse)
    Q_DISABLE_COPY(DeleteSimulationApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
