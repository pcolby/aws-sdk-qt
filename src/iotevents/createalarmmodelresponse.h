// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALARMMODELRESPONSE_H
#define QTAWS_CREATEALARMMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "createalarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateAlarmModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT CreateAlarmModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    CreateAlarmModelResponse(const CreateAlarmModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAlarmModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlarmModelResponse)
    Q_DISABLE_COPY(CreateAlarmModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
