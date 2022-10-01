// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSRESPONSE_P_H
#define QTAWS_IOTEVENTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class IoTEventsResponse;

class IoTEventsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTEventsResponsePrivate(IoTEventsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTEventsResponse)
    Q_DISABLE_COPY(IoTEventsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
