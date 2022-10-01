// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTEROPERATIONRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTEROPERATIONRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterOperationResponse;

class DescribeClusterOperationResponsePrivate : public KafkaResponsePrivate {

public:

    explicit DescribeClusterOperationResponsePrivate(DescribeClusterOperationResponse * const q);

    void parseDescribeClusterOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterOperationResponse)
    Q_DISABLE_COPY(DescribeClusterOperationResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
