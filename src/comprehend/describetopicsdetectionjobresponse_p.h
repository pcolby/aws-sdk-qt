// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETOPICSDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBETOPICSDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeTopicsDetectionJobResponse;

class DescribeTopicsDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeTopicsDetectionJobResponsePrivate(DescribeTopicsDetectionJobResponse * const q);

    void parseDescribeTopicsDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTopicsDetectionJobResponse)
    Q_DISABLE_COPY(DescribeTopicsDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
