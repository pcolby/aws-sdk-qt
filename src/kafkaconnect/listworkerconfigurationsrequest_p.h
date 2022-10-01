// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTWORKERCONFIGURATIONSREQUEST_P_H

#include "kafkaconnectrequest_p.h"
#include "listworkerconfigurationsrequest.h"

namespace QtAws {
namespace KafkaConnect {

class ListWorkerConfigurationsRequest;

class ListWorkerConfigurationsRequestPrivate : public KafkaConnectRequestPrivate {

public:
    ListWorkerConfigurationsRequestPrivate(const KafkaConnectRequest::Action action,
                                   ListWorkerConfigurationsRequest * const q);
    ListWorkerConfigurationsRequestPrivate(const ListWorkerConfigurationsRequestPrivate &other,
                                   ListWorkerConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkerConfigurationsRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
