// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class BatchDisassociateScramSecretResponse;

class BatchDisassociateScramSecretResponsePrivate : public KafkaResponsePrivate {

public:

    explicit BatchDisassociateScramSecretResponsePrivate(BatchDisassociateScramSecretResponse * const q);

    void parseBatchDisassociateScramSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateScramSecretResponse)
    Q_DISABLE_COPY(BatchDisassociateScramSecretResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
