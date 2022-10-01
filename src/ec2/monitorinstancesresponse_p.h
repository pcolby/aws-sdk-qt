// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MONITORINSTANCESRESPONSE_P_H
#define QTAWS_MONITORINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class MonitorInstancesResponse;

class MonitorInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit MonitorInstancesResponsePrivate(MonitorInstancesResponse * const q);

    void parseMonitorInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MonitorInstancesResponse)
    Q_DISABLE_COPY(MonitorInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
