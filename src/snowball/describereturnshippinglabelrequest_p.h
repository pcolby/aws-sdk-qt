// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETURNSHIPPINGLABELREQUEST_P_H
#define QTAWS_DESCRIBERETURNSHIPPINGLABELREQUEST_P_H

#include "snowballrequest_p.h"
#include "describereturnshippinglabelrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeReturnShippingLabelRequest;

class DescribeReturnShippingLabelRequestPrivate : public SnowballRequestPrivate {

public:
    DescribeReturnShippingLabelRequestPrivate(const SnowballRequest::Action action,
                                   DescribeReturnShippingLabelRequest * const q);
    DescribeReturnShippingLabelRequestPrivate(const DescribeReturnShippingLabelRequestPrivate &other,
                                   DescribeReturnShippingLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReturnShippingLabelRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
