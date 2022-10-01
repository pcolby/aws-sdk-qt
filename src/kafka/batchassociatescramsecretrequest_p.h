// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATESCRAMSECRETREQUEST_P_H
#define QTAWS_BATCHASSOCIATESCRAMSECRETREQUEST_P_H

#include "kafkarequest_p.h"
#include "batchassociatescramsecretrequest.h"

namespace QtAws {
namespace Kafka {

class BatchAssociateScramSecretRequest;

class BatchAssociateScramSecretRequestPrivate : public KafkaRequestPrivate {

public:
    BatchAssociateScramSecretRequestPrivate(const KafkaRequest::Action action,
                                   BatchAssociateScramSecretRequest * const q);
    BatchAssociateScramSecretRequestPrivate(const BatchAssociateScramSecretRequestPrivate &other,
                                   BatchAssociateScramSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateScramSecretRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
