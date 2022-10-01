// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDNODESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describereservednodesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodesRequest;

class DescribeReservedNodesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeReservedNodesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeReservedNodesRequest * const q);
    DescribeReservedNodesRequestPrivate(const DescribeReservedNodesRequestPrivate &other,
                                   DescribeReservedNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
