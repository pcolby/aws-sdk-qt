// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETRESPONSE_P_H
#define QTAWS_DESCRIBESTACKSETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetResponse;

class DescribeStackSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackSetResponsePrivate(DescribeStackSetResponse * const q);

    void parseDescribeStackSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackSetResponse)
    Q_DISABLE_COPY(DescribeStackSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
