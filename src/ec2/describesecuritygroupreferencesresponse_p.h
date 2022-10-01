// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_P_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupReferencesResponse;

class DescribeSecurityGroupReferencesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSecurityGroupReferencesResponsePrivate(DescribeSecurityGroupReferencesResponse * const q);

    void parseDescribeSecurityGroupReferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupReferencesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupReferencesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
