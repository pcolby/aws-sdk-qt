// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITEDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTSUITEDEFINITIONSRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteDefinitionsResponse;

class ListSuiteDefinitionsResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit ListSuiteDefinitionsResponsePrivate(ListSuiteDefinitionsResponse * const q);

    void parseListSuiteDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSuiteDefinitionsResponse)
    Q_DISABLE_COPY(ListSuiteDefinitionsResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
