// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTRESPONSE_P_H
#define QTAWS_DESCRIBEINPUTRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DescribeInputResponse;

class DescribeInputResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DescribeInputResponsePrivate(DescribeInputResponse * const q);

    void parseDescribeInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInputResponse)
    Q_DISABLE_COPY(DescribeInputResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
