// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALARMMODELRESPONSE_H
#define QTAWS_UPDATEALARMMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "updatealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateAlarmModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT UpdateAlarmModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    UpdateAlarmModelResponse(const UpdateAlarmModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAlarmModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAlarmModelResponse)
    Q_DISABLE_COPY(UpdateAlarmModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
