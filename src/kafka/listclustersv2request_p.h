// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSV2REQUEST_P_H
#define QTAWS_LISTCLUSTERSV2REQUEST_P_H

#include "kafkarequest_p.h"
#include "listclustersv2request.h"

namespace QtAws {
namespace Kafka {

class ListClustersV2Request;

class ListClustersV2RequestPrivate : public KafkaRequestPrivate {

public:
    ListClustersV2RequestPrivate(const KafkaRequest::Action action,
                                   ListClustersV2Request * const q);
    ListClustersV2RequestPrivate(const ListClustersV2RequestPrivate &other,
                                   ListClustersV2Request * const q);

private:
    Q_DECLARE_PUBLIC(ListClustersV2Request)

};

} // namespace Kafka
} // namespace QtAws

#endif
