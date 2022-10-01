// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntitiesDetectionJobResponse;

class DescribeEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeEntitiesDetectionJobResponsePrivate(DescribeEntitiesDetectionJobResponse * const q);

    void parseDescribeEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(DescribeEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
