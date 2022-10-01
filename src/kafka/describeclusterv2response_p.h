// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERV2RESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERV2RESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterV2Response;

class DescribeClusterV2ResponsePrivate : public KafkaResponsePrivate {

public:

    explicit DescribeClusterV2ResponsePrivate(DescribeClusterV2Response * const q);

    void parseDescribeClusterV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterV2Response)
    Q_DISABLE_COPY(DescribeClusterV2ResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
