// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUITEDEFINITIONRESPONSE_P_H
#define QTAWS_DELETESUITEDEFINITIONRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class DeleteSuiteDefinitionResponse;

class DeleteSuiteDefinitionResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit DeleteSuiteDefinitionResponsePrivate(DeleteSuiteDefinitionResponse * const q);

    void parseDeleteSuiteDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSuiteDefinitionResponse)
    Q_DISABLE_COPY(DeleteSuiteDefinitionResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
