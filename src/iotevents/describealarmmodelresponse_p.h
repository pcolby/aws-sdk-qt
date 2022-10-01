// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMMODELRESPONSE_P_H
#define QTAWS_DESCRIBEALARMMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DescribeAlarmModelResponse;

class DescribeAlarmModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DescribeAlarmModelResponsePrivate(DescribeAlarmModelResponse * const q);

    void parseDescribeAlarmModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmModelResponse)
    Q_DISABLE_COPY(DescribeAlarmModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
