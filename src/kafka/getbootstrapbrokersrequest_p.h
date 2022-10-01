// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOOTSTRAPBROKERSREQUEST_P_H
#define QTAWS_GETBOOTSTRAPBROKERSREQUEST_P_H

#include "kafkarequest_p.h"
#include "getbootstrapbrokersrequest.h"

namespace QtAws {
namespace Kafka {

class GetBootstrapBrokersRequest;

class GetBootstrapBrokersRequestPrivate : public KafkaRequestPrivate {

public:
    GetBootstrapBrokersRequestPrivate(const KafkaRequest::Action action,
                                   GetBootstrapBrokersRequest * const q);
    GetBootstrapBrokersRequestPrivate(const GetBootstrapBrokersRequestPrivate &other,
                                   GetBootstrapBrokersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBootstrapBrokersRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
