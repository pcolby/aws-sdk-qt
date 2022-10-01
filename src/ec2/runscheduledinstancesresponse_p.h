// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSCHEDULEDINSTANCESRESPONSE_P_H
#define QTAWS_RUNSCHEDULEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RunScheduledInstancesResponse;

class RunScheduledInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RunScheduledInstancesResponsePrivate(RunScheduledInstancesResponse * const q);

    void parseRunScheduledInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunScheduledInstancesResponse)
    Q_DISABLE_COPY(RunScheduledInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
