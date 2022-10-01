// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStacksResponse;

class DescribeStacksResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStacksResponsePrivate(DescribeStacksResponse * const q);

    void parseDescribeStacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStacksResponse)
    Q_DISABLE_COPY(DescribeStacksResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
