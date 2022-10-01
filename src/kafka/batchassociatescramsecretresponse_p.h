// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESCRAMSECRETRESPONSE_P_H
#define QTAWS_BATCHASSOCIATESCRAMSECRETRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class BatchAssociateScramSecretResponse;

class BatchAssociateScramSecretResponsePrivate : public KafkaResponsePrivate {

public:

    explicit BatchAssociateScramSecretResponsePrivate(BatchAssociateScramSecretResponse * const q);

    void parseBatchAssociateScramSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateScramSecretResponse)
    Q_DISABLE_COPY(BatchAssociateScramSecretResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
