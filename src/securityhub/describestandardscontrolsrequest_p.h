// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSCONTROLSREQUEST_P_H
#define QTAWS_DESCRIBESTANDARDSCONTROLSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "describestandardscontrolsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsControlsRequest;

class DescribeStandardsControlsRequestPrivate : public SecurityHubRequestPrivate {

public:
    DescribeStandardsControlsRequestPrivate(const SecurityHubRequest::Action action,
                                   DescribeStandardsControlsRequest * const q);
    DescribeStandardsControlsRequestPrivate(const DescribeStandardsControlsRequestPrivate &other,
                                   DescribeStandardsControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStandardsControlsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
