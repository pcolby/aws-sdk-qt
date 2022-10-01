// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMMODELRESPONSE_H
#define QTAWS_DESCRIBEALARMMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "describealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeAlarmModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT DescribeAlarmModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    DescribeAlarmModelResponse(const DescribeAlarmModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmModelResponse)
    Q_DISABLE_COPY(DescribeAlarmModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
