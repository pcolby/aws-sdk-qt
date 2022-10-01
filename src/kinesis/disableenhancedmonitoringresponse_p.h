// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEENHANCEDMONITORINGRESPONSE_P_H
#define QTAWS_DISABLEENHANCEDMONITORINGRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DisableEnhancedMonitoringResponse;

class DisableEnhancedMonitoringResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DisableEnhancedMonitoringResponsePrivate(DisableEnhancedMonitoringResponse * const q);

    void parseDisableEnhancedMonitoringResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableEnhancedMonitoringResponse)
    Q_DISABLE_COPY(DisableEnhancedMonitoringResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
