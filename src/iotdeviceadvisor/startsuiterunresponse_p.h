// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUITERUNRESPONSE_P_H
#define QTAWS_STARTSUITERUNRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StartSuiteRunResponse;

class StartSuiteRunResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit StartSuiteRunResponsePrivate(StartSuiteRunResponse * const q);

    void parseStartSuiteRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSuiteRunResponse)
    Q_DISABLE_COPY(StartSuiteRunResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
