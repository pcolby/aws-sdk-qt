// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEOPTIONGROUPOPTIONSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeoptiongroupoptionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupOptionsRequest;

class DescribeOptionGroupOptionsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeOptionGroupOptionsRequestPrivate(const RdsRequest::Action action,
                                   DescribeOptionGroupOptionsRequest * const q);
    DescribeOptionGroupOptionsRequestPrivate(const DescribeOptionGroupOptionsRequestPrivate &other,
                                   DescribeOptionGroupOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOptionGroupOptionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
