// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKERCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEWORKERCONFIGURATIONRESPONSE_P_H

#include "kafkaconnectresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class DescribeWorkerConfigurationResponse;

class DescribeWorkerConfigurationResponsePrivate : public KafkaConnectResponsePrivate {

public:

    explicit DescribeWorkerConfigurationResponsePrivate(DescribeWorkerConfigurationResponse * const q);

    void parseDescribeWorkerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkerConfigurationResponse)
    Q_DISABLE_COPY(DescribeWorkerConfigurationResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
