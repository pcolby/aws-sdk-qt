// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDHCPOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDHCPOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeDhcpOptionsResponse;

class DescribeDhcpOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeDhcpOptionsResponsePrivate(DescribeDhcpOptionsResponse * const q);

    void parseDescribeDhcpOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDhcpOptionsResponse)
    Q_DISABLE_COPY(DescribeDhcpOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
