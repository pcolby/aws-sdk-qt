// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUITEDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATESUITEDEFINITIONRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class UpdateSuiteDefinitionResponse;

class UpdateSuiteDefinitionResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit UpdateSuiteDefinitionResponsePrivate(UpdateSuiteDefinitionResponse * const q);

    void parseUpdateSuiteDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSuiteDefinitionResponse)
    Q_DISABLE_COPY(UpdateSuiteDefinitionResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
