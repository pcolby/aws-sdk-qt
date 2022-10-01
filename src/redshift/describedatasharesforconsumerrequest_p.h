// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORCONSUMERREQUEST_P_H
#define QTAWS_DESCRIBEDATASHARESFORCONSUMERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describedatasharesforconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForConsumerRequest;

class DescribeDataSharesForConsumerRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeDataSharesForConsumerRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeDataSharesForConsumerRequest * const q);
    DescribeDataSharesForConsumerRequestPrivate(const DescribeDataSharesForConsumerRequestPrivate &other,
                                   DescribeDataSharesForConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesForConsumerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
