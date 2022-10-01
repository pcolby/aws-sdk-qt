// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNRESPONSE_P_H
#define QTAWS_GETSUITERUNRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunResponse;

class GetSuiteRunResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit GetSuiteRunResponsePrivate(GetSuiteRunResponse * const q);

    void parseGetSuiteRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSuiteRunResponse)
    Q_DISABLE_COPY(GetSuiteRunResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
