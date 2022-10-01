// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSREQUEST_P_H
#define QTAWS_LISTCLUSTERSREQUEST_P_H

#include "kafkarequest_p.h"
#include "listclustersrequest.h"

namespace QtAws {
namespace Kafka {

class ListClustersRequest;

class ListClustersRequestPrivate : public KafkaRequestPrivate {

public:
    ListClustersRequestPrivate(const KafkaRequest::Action action,
                                   ListClustersRequest * const q);
    ListClustersRequestPrivate(const ListClustersRequestPrivate &other,
                                   ListClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClustersRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
