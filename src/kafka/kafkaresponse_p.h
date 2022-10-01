// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKARESPONSE_P_H
#define QTAWS_KAFKARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Kafka {

class KafkaResponse;

class KafkaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KafkaResponsePrivate(KafkaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KafkaResponse)
    Q_DISABLE_COPY(KafkaResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
