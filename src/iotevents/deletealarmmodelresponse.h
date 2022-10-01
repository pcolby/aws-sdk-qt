// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMMODELRESPONSE_H
#define QTAWS_DELETEALARMMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "deletealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteAlarmModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT DeleteAlarmModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    DeleteAlarmModelResponse(const DeleteAlarmModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlarmModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlarmModelResponse)
    Q_DISABLE_COPY(DeleteAlarmModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
