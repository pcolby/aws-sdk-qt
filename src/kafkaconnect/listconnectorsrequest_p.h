// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSREQUEST_P_H
#define QTAWS_LISTCONNECTORSREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "listconnectorsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListConnectorsRequest;

class ListConnectorsRequestPrivate : public KafkaConnectRequestPrivate {

public:
    ListConnectorsRequestPrivate(const KafkaConnectRequest::Action action,
                                   ListConnectorsRequest * const q);
    ListConnectorsRequestPrivate(const ListConnectorsRequestPrivate &other,
                                   ListConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectorsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
