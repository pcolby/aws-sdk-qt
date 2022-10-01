// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEADDRESSESATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesAttributeResponse;

class DescribeAddressesAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeAddressesAttributeResponsePrivate(DescribeAddressesAttributeResponse * const q);

    void parseDescribeAddressesAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAddressesAttributeResponse)
    Q_DISABLE_COPY(DescribeAddressesAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
