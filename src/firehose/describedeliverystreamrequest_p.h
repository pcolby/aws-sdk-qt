// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "describedeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class DescribeDeliveryStreamRequest;

class DescribeDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    DescribeDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   DescribeDeliveryStreamRequest * const q);
    DescribeDeliveryStreamRequestPrivate(const DescribeDeliveryStreamRequestPrivate &other,
                                   DescribeDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
