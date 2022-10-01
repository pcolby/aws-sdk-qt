// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceAttributeResponse;

class DescribeInstanceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceAttributeResponsePrivate(DescribeInstanceAttributeResponse * const q);

    void parseDescribeInstanceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAttributeResponse)
    Q_DISABLE_COPY(DescribeInstanceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
