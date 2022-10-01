// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMRESPONSE_P_H
#define QTAWS_DESCRIBEALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeAlarmResponse;

class DescribeAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit DescribeAlarmResponsePrivate(DescribeAlarmResponse * const q);

    void parseDescribeAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmResponse)
    Q_DISABLE_COPY(DescribeAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
