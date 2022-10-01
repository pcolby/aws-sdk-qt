// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCEREGIONSREQUEST_P_H
#define QTAWS_DESCRIBESOURCEREGIONSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describesourceregionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeSourceRegionsRequest;

class DescribeSourceRegionsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeSourceRegionsRequestPrivate(const RdsRequest::Action action,
                                   DescribeSourceRegionsRequest * const q);
    DescribeSourceRegionsRequestPrivate(const DescribeSourceRegionsRequestPrivate &other,
                                   DescribeSourceRegionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSourceRegionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
