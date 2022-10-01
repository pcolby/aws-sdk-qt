// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERV2REQUEST_P_H
#define QTAWS_DESCRIBECLUSTERV2REQUEST_P_H

#include "kafkarequest_p.h"
#include "describeclusterv2request.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterV2Request;

class DescribeClusterV2RequestPrivate : public KafkaRequestPrivate {

public:
    DescribeClusterV2RequestPrivate(const KafkaRequest::Action action,
                                   DescribeClusterV2Request * const q);
    DescribeClusterV2RequestPrivate(const DescribeClusterV2RequestPrivate &other,
                                   DescribeClusterV2Request * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterV2Request)

};

} // namespace Kafka
} // namespace QtAws

#endif
