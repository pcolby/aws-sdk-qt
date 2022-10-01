// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAVAILABILITYMONITORTESTRESPONSE_P_H
#define QTAWS_STARTAVAILABILITYMONITORTESTRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class StartAvailabilityMonitorTestResponse;

class StartAvailabilityMonitorTestResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit StartAvailabilityMonitorTestResponsePrivate(StartAvailabilityMonitorTestResponse * const q);

    void parseStartAvailabilityMonitorTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAvailabilityMonitorTestResponse)
    Q_DISABLE_COPY(StartAvailabilityMonitorTestResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
