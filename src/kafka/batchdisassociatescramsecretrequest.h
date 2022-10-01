// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESCRAMSECRETREQUEST_H
#define QTAWS_BATCHDISASSOCIATESCRAMSECRETREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class BatchDisassociateScramSecretRequestPrivate;

class QTAWSKAFKA_EXPORT BatchDisassociateScramSecretRequest : public KafkaRequest {

public:
    BatchDisassociateScramSecretRequest(const BatchDisassociateScramSecretRequest &other);
    BatchDisassociateScramSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateScramSecretRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
