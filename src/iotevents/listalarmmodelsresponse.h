// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELSRESPONSE_H
#define QTAWS_LISTALARMMODELSRESPONSE_H

#include "ioteventsresponse.h"
#include "listalarmmodelsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT ListAlarmModelsResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    ListAlarmModelsResponse(const ListAlarmModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlarmModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmModelsResponse)
    Q_DISABLE_COPY(ListAlarmModelsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
