// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESREQUEST_P_H
#define QTAWS_LISTNODESREQUEST_P_H

#include "kafkarequest_p.h"
#include "listnodesrequest.h"

namespace QtAws {
namespace Kafka {

class ListNodesRequest;

class ListNodesRequestPrivate : public KafkaRequestPrivate {

public:
    ListNodesRequestPrivate(const KafkaRequest::Action action,
                                   ListNodesRequest * const q);
    ListNodesRequestPrivate(const ListNodesRequestPrivate &other,
                                   ListNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodesRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
