// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPATIBLEKAFKAVERSIONSREQUEST_P_H
#define QTAWS_GETCOMPATIBLEKAFKAVERSIONSREQUEST_P_H

#include "kafkarequest_p.h"
#include "getcompatiblekafkaversionsrequest.h"

namespace QtAws {
namespace Kafka {

class GetCompatibleKafkaVersionsRequest;

class GetCompatibleKafkaVersionsRequestPrivate : public KafkaRequestPrivate {

public:
    GetCompatibleKafkaVersionsRequestPrivate(const KafkaRequest::Action action,
                                   GetCompatibleKafkaVersionsRequest * const q);
    GetCompatibleKafkaVersionsRequestPrivate(const GetCompatibleKafkaVersionsRequestPrivate &other,
                                   GetCompatibleKafkaVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCompatibleKafkaVersionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
