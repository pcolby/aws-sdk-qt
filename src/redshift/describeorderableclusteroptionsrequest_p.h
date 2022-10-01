// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeorderableclusteroptionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeOrderableClusterOptionsRequest;

class DescribeOrderableClusterOptionsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeOrderableClusterOptionsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeOrderableClusterOptionsRequest * const q);
    DescribeOrderableClusterOptionsRequestPrivate(const DescribeOrderableClusterOptionsRequestPrivate &other,
                                   DescribeOrderableClusterOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableClusterOptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
