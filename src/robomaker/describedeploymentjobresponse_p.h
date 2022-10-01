// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDEPLOYMENTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeDeploymentJobResponse;

class DescribeDeploymentJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeDeploymentJobResponsePrivate(DescribeDeploymentJobResponse * const q);

    void parseDescribeDeploymentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeploymentJobResponse)
    Q_DISABLE_COPY(DescribeDeploymentJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
