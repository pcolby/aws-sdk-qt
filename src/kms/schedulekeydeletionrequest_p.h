// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULEKEYDELETIONREQUEST_P_H
#define QTAWS_SCHEDULEKEYDELETIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "schedulekeydeletionrequest.h"

namespace QtAws {
namespace Kms {

class ScheduleKeyDeletionRequest;

class ScheduleKeyDeletionRequestPrivate : public KmsRequestPrivate {

public:
    ScheduleKeyDeletionRequestPrivate(const KmsRequest::Action action,
                                   ScheduleKeyDeletionRequest * const q);
    ScheduleKeyDeletionRequestPrivate(const ScheduleKeyDeletionRequestPrivate &other,
                                   ScheduleKeyDeletionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ScheduleKeyDeletionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
