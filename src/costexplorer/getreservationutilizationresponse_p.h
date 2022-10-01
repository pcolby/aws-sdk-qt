// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONUTILIZATIONRESPONSE_P_H
#define QTAWS_GETRESERVATIONUTILIZATIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationUtilizationResponse;

class GetReservationUtilizationResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetReservationUtilizationResponsePrivate(GetReservationUtilizationResponse * const q);

    void parseGetReservationUtilizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservationUtilizationResponse)
    Q_DISABLE_COPY(GetReservationUtilizationResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
