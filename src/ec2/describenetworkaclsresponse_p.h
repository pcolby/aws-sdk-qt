// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKACLSRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKACLSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkAclsResponse;

class DescribeNetworkAclsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkAclsResponsePrivate(DescribeNetworkAclsResponse * const q);

    void parseDescribeNetworkAclsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkAclsResponse)
    Q_DISABLE_COPY(DescribeNetworkAclsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
