// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERV2REQUEST_P_H
#define QTAWS_CREATECLUSTERV2REQUEST_P_H

#include "kafkarequest_p.h"
#include "createclusterv2request.h"

namespace QtAws {
namespace Kafka {

class CreateClusterV2Request;

class CreateClusterV2RequestPrivate : public KafkaRequestPrivate {

public:
    CreateClusterV2RequestPrivate(const KafkaRequest::Action action,
                                   CreateClusterV2Request * const q);
    CreateClusterV2RequestPrivate(const CreateClusterV2RequestPrivate &other,
                                   CreateClusterV2Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterV2Request)

};

} // namespace Kafka
} // namespace QtAws

#endif
