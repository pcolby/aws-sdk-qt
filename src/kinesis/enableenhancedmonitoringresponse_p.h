// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEENHANCEDMONITORINGRESPONSE_P_H
#define QTAWS_ENABLEENHANCEDMONITORINGRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class EnableEnhancedMonitoringResponse;

class EnableEnhancedMonitoringResponsePrivate : public KinesisResponsePrivate {

public:

    explicit EnableEnhancedMonitoringResponsePrivate(EnableEnhancedMonitoringResponse * const q);

    void parseEnableEnhancedMonitoringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableEnhancedMonitoringResponse)
    Q_DISABLE_COPY(EnableEnhancedMonitoringResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
