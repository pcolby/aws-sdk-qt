// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENSORSTATISTICSRESPONSE_P_H
#define QTAWS_LISTSENSORSTATISTICSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListSensorStatisticsResponse;

class ListSensorStatisticsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListSensorStatisticsResponsePrivate(ListSensorStatisticsResponse * const q);

    void parseListSensorStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSensorStatisticsResponse)
    Q_DISABLE_COPY(ListSensorStatisticsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
