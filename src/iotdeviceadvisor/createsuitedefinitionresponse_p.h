// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUITEDEFINITIONRESPONSE_P_H
#define QTAWS_CREATESUITEDEFINITIONRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class CreateSuiteDefinitionResponse;

class CreateSuiteDefinitionResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit CreateSuiteDefinitionResponsePrivate(CreateSuiteDefinitionResponse * const q);

    void parseCreateSuiteDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSuiteDefinitionResponse)
    Q_DISABLE_COPY(CreateSuiteDefinitionResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
