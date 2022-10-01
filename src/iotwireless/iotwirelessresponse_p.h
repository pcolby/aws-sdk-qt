// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTWIRELESSRESPONSE_P_H
#define QTAWS_IOTWIRELESSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class IoTWirelessResponse;

class IoTWirelessResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTWirelessResponsePrivate(IoTWirelessResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTWirelessResponse)
    Q_DISABLE_COPY(IoTWirelessResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
