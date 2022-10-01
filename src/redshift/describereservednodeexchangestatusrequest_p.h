// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describereservednodeexchangestatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeExchangeStatusRequest;

class DescribeReservedNodeExchangeStatusRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeReservedNodeExchangeStatusRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeReservedNodeExchangeStatusRequest * const q);
    DescribeReservedNodeExchangeStatusRequestPrivate(const DescribeReservedNodeExchangeStatusRequestPrivate &other,
                                   DescribeReservedNodeExchangeStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodeExchangeStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
