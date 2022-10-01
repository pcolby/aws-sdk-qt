// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERPARAMETERSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclusterparametersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParametersRequest;

class DescribeClusterParametersRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterParametersRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterParametersRequest * const q);
    DescribeClusterParametersRequestPrivate(const DescribeClusterParametersRequestPrivate &other,
                                   DescribeClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterParametersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
