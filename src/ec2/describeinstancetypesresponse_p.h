// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCETYPESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypesResponse;

class DescribeInstanceTypesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceTypesResponsePrivate(DescribeInstanceTypesResponse * const q);

    void parseDescribeInstanceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypesResponse)
    Q_DISABLE_COPY(DescribeInstanceTypesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
