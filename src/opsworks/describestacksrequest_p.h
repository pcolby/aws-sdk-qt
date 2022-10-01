// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSREQUEST_P_H
#define QTAWS_DESCRIBESTACKSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describestacksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStacksRequest;

class DescribeStacksRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeStacksRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeStacksRequest * const q);
    DescribeStacksRequestPrivate(const DescribeStacksRequestPrivate &other,
                                   DescribeStacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStacksRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
