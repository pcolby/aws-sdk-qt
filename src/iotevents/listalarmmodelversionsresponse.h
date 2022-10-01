// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELVERSIONSRESPONSE_H
#define QTAWS_LISTALARMMODELVERSIONSRESPONSE_H

#include "ioteventsresponse.h"
#include "listalarmmodelversionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelVersionsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT ListAlarmModelVersionsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    ListAlarmModelVersionsResponse(const ListAlarmModelVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlarmModelVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmModelVersionsResponse)
    Q_DISABLE_COPY(ListAlarmModelVersionsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
