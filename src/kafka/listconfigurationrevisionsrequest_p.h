// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONREVISIONSREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONREVISIONSREQUEST_P_H

#include "kafkarequest_p.h"
#include "listconfigurationrevisionsrequest.h"

namespace QtAws {
namespace Kafka {

class ListConfigurationRevisionsRequest;

class ListConfigurationRevisionsRequestPrivate : public KafkaRequestPrivate {

public:
    ListConfigurationRevisionsRequestPrivate(const KafkaRequest::Action action,
                                   ListConfigurationRevisionsRequest * const q);
    ListConfigurationRevisionsRequestPrivate(const ListConfigurationRevisionsRequestPrivate &other,
                                   ListConfigurationRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationRevisionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
