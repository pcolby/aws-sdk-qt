// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describedefaultclusterparametersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDefaultClusterParametersRequest;

class DescribeDefaultClusterParametersRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeDefaultClusterParametersRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeDefaultClusterParametersRequest * const q);
    DescribeDefaultClusterParametersRequestPrivate(const DescribeDefaultClusterParametersRequestPrivate &other,
                                   DescribeDefaultClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultClusterParametersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
