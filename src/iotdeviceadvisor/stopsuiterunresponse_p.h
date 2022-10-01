// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSUITERUNRESPONSE_P_H
#define QTAWS_STOPSUITERUNRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StopSuiteRunResponse;

class StopSuiteRunResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit StopSuiteRunResponsePrivate(StopSuiteRunResponse * const q);

    void parseStopSuiteRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopSuiteRunResponse)
    Q_DISABLE_COPY(StopSuiteRunResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
