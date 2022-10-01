// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITERUNSRESPONSE_P_H
#define QTAWS_LISTSUITERUNSRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteRunsResponse;

class ListSuiteRunsResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit ListSuiteRunsResponsePrivate(ListSuiteRunsResponse * const q);

    void parseListSuiteRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSuiteRunsResponse)
    Q_DISABLE_COPY(ListSuiteRunsResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
