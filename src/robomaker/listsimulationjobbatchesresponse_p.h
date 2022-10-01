// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBBATCHESRESPONSE_P_H
#define QTAWS_LISTSIMULATIONJOBBATCHESRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobBatchesResponse;

class ListSimulationJobBatchesResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit ListSimulationJobBatchesResponsePrivate(ListSimulationJobBatchesResponse * const q);

    void parseListSimulationJobBatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSimulationJobBatchesResponse)
    Q_DISABLE_COPY(ListSimulationJobBatchesResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
