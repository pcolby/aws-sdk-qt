// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENSORSTATISTICSREQUEST_P_H
#define QTAWS_LISTSENSORSTATISTICSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listsensorstatisticsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListSensorStatisticsRequest;

class ListSensorStatisticsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListSensorStatisticsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListSensorStatisticsRequest * const q);
    ListSensorStatisticsRequestPrivate(const ListSensorStatisticsRequestPrivate &other,
                                   ListSensorStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSensorStatisticsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
