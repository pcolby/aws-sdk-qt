// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDHCPOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEDHCPOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeDhcpOptionsRequest;

class DescribeDhcpOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeDhcpOptionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeDhcpOptionsRequest * const q);
    DescribeDhcpOptionsRequestPrivate(const DescribeDhcpOptionsRequestPrivate &other,
                                   DescribeDhcpOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
