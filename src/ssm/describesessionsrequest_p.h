// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESESSIONSREQUEST_P_H
#define QTAWS_DESCRIBESESSIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describesessionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeSessionsRequest;

class DescribeSessionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeSessionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeSessionsRequest * const q);
    DescribeSessionsRequestPrivate(const DescribeSessionsRequestPrivate &other,
                                   DescribeSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSessionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
