// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRAMSECRETSREQUEST_P_H
#define QTAWS_LISTSCRAMSECRETSREQUEST_P_H

#include "kafkarequest_p.h"
#include "listscramsecretsrequest.h"

namespace QtAws {
namespace Kafka {

class ListScramSecretsRequest;

class ListScramSecretsRequestPrivate : public KafkaRequestPrivate {

public:
    ListScramSecretsRequestPrivate(const KafkaRequest::Action action,
                                   ListScramSecretsRequest * const q);
    ListScramSecretsRequestPrivate(const ListScramSecretsRequestPrivate &other,
                                   ListScramSecretsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListScramSecretsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
