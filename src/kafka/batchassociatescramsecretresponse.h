// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESCRAMSECRETRESPONSE_H
#define QTAWS_BATCHASSOCIATESCRAMSECRETRESPONSE_H

#include "kafkaresponse.h"
#include "batchassociatescramsecretrequest.h"

namespace QtAws {
namespace Kafka {

class BatchAssociateScramSecretResponsePrivate;

class QTAWSKAFKA_EXPORT BatchAssociateScramSecretResponse : public KafkaResponse {
    Q_OBJECT

public:
    BatchAssociateScramSecretResponse(const BatchAssociateScramSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateScramSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateScramSecretResponse)
    Q_DISABLE_COPY(BatchAssociateScramSecretResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
