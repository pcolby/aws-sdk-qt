// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERV2RESPONSE_H
#define QTAWS_DESCRIBECLUSTERV2RESPONSE_H

#include "kafkaresponse.h"
#include "describeclusterv2request.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterV2ResponsePrivate;

class QTAWSKAFKA_EXPORT DescribeClusterV2Response : public KafkaResponse {
    Q_OBJECT

public:
    DescribeClusterV2Response(const DescribeClusterV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterV2Response)
    Q_DISABLE_COPY(DescribeClusterV2Response)

};

} // namespace Kafka
} // namespace QtAws

#endif
