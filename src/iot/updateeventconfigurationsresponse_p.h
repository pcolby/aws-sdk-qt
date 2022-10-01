// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_UPDATEEVENTCONFIGURATIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateEventConfigurationsResponse;

class UpdateEventConfigurationsResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateEventConfigurationsResponsePrivate(UpdateEventConfigurationsResponse * const q);

    void parseUpdateEventConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventConfigurationsResponse)
    Q_DISABLE_COPY(UpdateEventConfigurationsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
