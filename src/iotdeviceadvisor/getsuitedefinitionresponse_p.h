// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEDEFINITIONRESPONSE_P_H
#define QTAWS_GETSUITEDEFINITIONRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteDefinitionResponse;

class GetSuiteDefinitionResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit GetSuiteDefinitionResponsePrivate(GetSuiteDefinitionResponse * const q);

    void parseGetSuiteDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSuiteDefinitionResponse)
    Q_DISABLE_COPY(GetSuiteDefinitionResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
