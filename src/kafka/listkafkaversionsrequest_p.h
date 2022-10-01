// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKAFKAVERSIONSREQUEST_P_H
#define QTAWS_LISTKAFKAVERSIONSREQUEST_P_H

#include "kafkarequest_p.h"
#include "listkafkaversionsrequest.h"

namespace QtAws {
namespace Kafka {

class ListKafkaVersionsRequest;

class ListKafkaVersionsRequestPrivate : public KafkaRequestPrivate {

public:
    ListKafkaVersionsRequestPrivate(const KafkaRequest::Action action,
                                   ListKafkaVersionsRequest * const q);
    ListKafkaVersionsRequestPrivate(const ListKafkaVersionsRequestPrivate &other,
                                   ListKafkaVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKafkaVersionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
