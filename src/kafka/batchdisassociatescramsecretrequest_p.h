// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATESCRAMSECRETREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATESCRAMSECRETREQUEST_P_H

#include "kafkarequest_p.h"
#include "batchdisassociatescramsecretrequest.h"

namespace QtAws {
namespace Kafka {

class BatchDisassociateScramSecretRequest;

class BatchDisassociateScramSecretRequestPrivate : public KafkaRequestPrivate {

public:
    BatchDisassociateScramSecretRequestPrivate(const KafkaRequest::Action action,
                                   BatchDisassociateScramSecretRequest * const q);
    BatchDisassociateScramSecretRequestPrivate(const BatchDisassociateScramSecretRequestPrivate &other,
                                   BatchDisassociateScramSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateScramSecretRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
