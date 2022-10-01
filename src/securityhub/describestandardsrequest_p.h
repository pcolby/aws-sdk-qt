// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSREQUEST_P_H
#define QTAWS_DESCRIBESTANDARDSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "describestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsRequest;

class DescribeStandardsRequestPrivate : public SecurityHubRequestPrivate {

public:
    DescribeStandardsRequestPrivate(const SecurityHubRequest::Action action,
                                   DescribeStandardsRequest * const q);
    DescribeStandardsRequestPrivate(const DescribeStandardsRequestPrivate &other,
                                   DescribeStandardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
