// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENSORSTATISTICSRESPONSE_H
#define QTAWS_LISTSENSORSTATISTICSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listsensorstatisticsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListSensorStatisticsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListSensorStatisticsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListSensorStatisticsResponse(const ListSensorStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSensorStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSensorStatisticsResponse)
    Q_DISABLE_COPY(ListSensorStatisticsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
