// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERDSDBINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERDSDBINSTANCESREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describerdsdbinstancesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRdsDbInstancesRequest;

class DescribeRdsDbInstancesRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeRdsDbInstancesRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeRdsDbInstancesRequest * const q);
    DescribeRdsDbInstancesRequestPrivate(const DescribeRdsDbInstancesRequestPrivate &other,
                                   DescribeRdsDbInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRdsDbInstancesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
