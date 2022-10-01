// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSRESPONSE_P_H
#define QTAWS_PUTLOGGINGOPTIONSRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class PutLoggingOptionsResponse;

class PutLoggingOptionsResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit PutLoggingOptionsResponsePrivate(PutLoggingOptionsResponse * const q);

    void parsePutLoggingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLoggingOptionsResponse)
    Q_DISABLE_COPY(PutLoggingOptionsResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
