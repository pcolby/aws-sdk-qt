// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackDriftDetectionStatusResponse;

class DescribeStackDriftDetectionStatusResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackDriftDetectionStatusResponsePrivate(DescribeStackDriftDetectionStatusResponse * const q);

    void parseDescribeStackDriftDetectionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackDriftDetectionStatusResponse)
    Q_DISABLE_COPY(DescribeStackDriftDetectionStatusResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
