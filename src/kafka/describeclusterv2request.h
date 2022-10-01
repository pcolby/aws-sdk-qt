// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERV2REQUEST_H
#define QTAWS_DESCRIBECLUSTERV2REQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class DescribeClusterV2RequestPrivate;

class QTAWSKAFKA_EXPORT DescribeClusterV2Request : public KafkaRequest {

public:
    DescribeClusterV2Request(const DescribeClusterV2Request &other);
    DescribeClusterV2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterV2Request)

};

} // namespace Kafka
} // namespace QtAws

#endif
