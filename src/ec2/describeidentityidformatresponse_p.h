// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYIDFORMATRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYIDFORMATRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdentityIdFormatResponse;

class DescribeIdentityIdFormatResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIdentityIdFormatResponsePrivate(DescribeIdentityIdFormatResponse * const q);

    void parseDescribeIdentityIdFormatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityIdFormatResponse)
    Q_DISABLE_COPY(DescribeIdentityIdFormatResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
