// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORPRODUCERREQUEST_P_H
#define QTAWS_DESCRIBEDATASHARESFORPRODUCERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describedatasharesforproducerrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForProducerRequest;

class DescribeDataSharesForProducerRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeDataSharesForProducerRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeDataSharesForProducerRequest * const q);
    DescribeDataSharesForProducerRequestPrivate(const DescribeDataSharesForProducerRequestPrivate &other,
                                   DescribeDataSharesForProducerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesForProducerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
