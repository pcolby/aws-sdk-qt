// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACONNECTRESPONSE_P_H
#define QTAWS_KAFKACONNECTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectResponse;

class KafkaConnectResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KafkaConnectResponsePrivate(KafkaConnectResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KafkaConnectResponse)
    Q_DISABLE_COPY(KafkaConnectResponsePrivate)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
