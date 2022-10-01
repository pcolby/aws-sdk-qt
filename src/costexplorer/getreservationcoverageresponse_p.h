// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONCOVERAGERESPONSE_P_H
#define QTAWS_GETRESERVATIONCOVERAGERESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationCoverageResponse;

class GetReservationCoverageResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetReservationCoverageResponsePrivate(GetReservationCoverageResponse * const q);

    void parseGetReservationCoverageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservationCoverageResponse)
    Q_DISABLE_COPY(GetReservationCoverageResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
