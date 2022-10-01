// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSREQUEST_P_H
#define QTAWS_DESCRIBEADDRESSREQUEST_P_H

#include "snowballrequest_p.h"
#include "describeaddressrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeAddressRequest;

class DescribeAddressRequestPrivate : public SnowballRequestPrivate {

public:
    DescribeAddressRequestPrivate(const SnowballRequest::Action action,
                                   DescribeAddressRequest * const q);
    DescribeAddressRequestPrivate(const DescribeAddressRequestPrivate &other,
                                   DescribeAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddressRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
