// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTEROPERATIONSREQUEST_P_H
#define QTAWS_LISTCLUSTEROPERATIONSREQUEST_P_H

#include "kafkarequest_p.h"
#include "listclusteroperationsrequest.h"

namespace QtAws {
namespace Kafka {

class ListClusterOperationsRequest;

class ListClusterOperationsRequestPrivate : public KafkaRequestPrivate {

public:
    ListClusterOperationsRequestPrivate(const KafkaRequest::Action action,
                                   ListClusterOperationsRequest * const q);
    ListClusterOperationsRequestPrivate(const ListClusterOperationsRequestPrivate &other,
                                   ListClusterOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClusterOperationsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
