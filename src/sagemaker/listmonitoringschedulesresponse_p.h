// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGSCHEDULESRESPONSE_P_H
#define QTAWS_LISTMONITORINGSCHEDULESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringSchedulesResponse;

class ListMonitoringSchedulesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListMonitoringSchedulesResponsePrivate(ListMonitoringSchedulesResponse * const q);

    void parseListMonitoringSchedulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMonitoringSchedulesResponse)
    Q_DISABLE_COPY(ListMonitoringSchedulesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
