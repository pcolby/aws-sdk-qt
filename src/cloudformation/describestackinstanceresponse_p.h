// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBESTACKINSTANCERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackInstanceResponse;

class DescribeStackInstanceResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackInstanceResponsePrivate(DescribeStackInstanceResponse * const q);

    void parseDescribeStackInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackInstanceResponse)
    Q_DISABLE_COPY(DescribeStackInstanceResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
