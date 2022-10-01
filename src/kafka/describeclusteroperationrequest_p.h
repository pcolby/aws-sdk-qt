// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTEROPERATIONREQUEST_P_H
#define QTAWS_DESCRIBECLUSTEROPERATIONREQUEST_P_H

#include "kafkarequest_p.h"
#include "describeclusteroperationrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterOperationRequest;

class DescribeClusterOperationRequestPrivate : public KafkaRequestPrivate {

public:
    DescribeClusterOperationRequestPrivate(const KafkaRequest::Action action,
                                   DescribeClusterOperationRequest * const q);
    DescribeClusterOperationRequestPrivate(const DescribeClusterOperationRequestPrivate &other,
                                   DescribeClusterOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterOperationRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
