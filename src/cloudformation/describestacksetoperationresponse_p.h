// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETOPERATIONRESPONSE_P_H
#define QTAWS_DESCRIBESTACKSETOPERATIONRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetOperationResponse;

class DescribeStackSetOperationResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackSetOperationResponsePrivate(DescribeStackSetOperationResponse * const q);

    void parseDescribeStackSetOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackSetOperationResponse)
    Q_DISABLE_COPY(DescribeStackSetOperationResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
