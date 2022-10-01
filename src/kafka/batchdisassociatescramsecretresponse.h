// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_H
#define QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_H

#include "kafkaresponse.h"
#include "batchdisassociatescramsecretrequest.h"

namespace QtAws {
namespace Kafka {

class BatchDisassociateScramSecretResponsePrivate;

class QTAWSKAFKA_EXPORT BatchDisassociateScramSecretResponse : public KafkaResponse {
    Q_OBJECT

public:
    BatchDisassociateScramSecretResponse(const BatchDisassociateScramSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateScramSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateScramSecretResponse)
    Q_DISABLE_COPY(BatchDisassociateScramSecretResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
