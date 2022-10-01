// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERAIDARRAYSREQUEST_P_H
#define QTAWS_DESCRIBERAIDARRAYSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeraidarraysrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRaidArraysRequest;

class DescribeRaidArraysRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeRaidArraysRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeRaidArraysRequest * const q);
    DescribeRaidArraysRequestPrivate(const DescribeRaidArraysRequestPrivate &other,
                                   DescribeRaidArraysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRaidArraysRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
