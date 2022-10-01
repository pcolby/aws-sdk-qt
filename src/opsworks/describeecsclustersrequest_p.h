// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEECSCLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBEECSCLUSTERSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeecsclustersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeEcsClustersRequest;

class DescribeEcsClustersRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeEcsClustersRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeEcsClustersRequest * const q);
    DescribeEcsClustersRequestPrivate(const DescribeEcsClustersRequestPrivate &other,
                                   DescribeEcsClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEcsClustersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
