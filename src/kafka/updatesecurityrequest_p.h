// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYREQUEST_P_H
#define QTAWS_UPDATESECURITYREQUEST_P_H

#include "kafkarequest_p.h"
#include "updatesecurityrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateSecurityRequest;

class UpdateSecurityRequestPrivate : public KafkaRequestPrivate {

public:
    UpdateSecurityRequestPrivate(const KafkaRequest::Action action,
                                   UpdateSecurityRequest * const q);
    UpdateSecurityRequestPrivate(const UpdateSecurityRequestPrivate &other,
                                   UpdateSecurityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
