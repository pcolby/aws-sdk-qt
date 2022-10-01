// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERREQUEST_P_H

#include "kafkarequest_p.h"
#include "describeclusterrequest.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterRequest;

class DescribeClusterRequestPrivate : public KafkaRequestPrivate {

public:
    DescribeClusterRequestPrivate(const KafkaRequest::Action action,
                                   DescribeClusterRequest * const q);
    DescribeClusterRequestPrivate(const DescribeClusterRequestPrivate &other,
                                   DescribeClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
