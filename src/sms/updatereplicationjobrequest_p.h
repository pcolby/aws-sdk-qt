// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONJOBREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONJOBREQUEST_P_H

#include "smsrequest_p.h"
#include "updatereplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class UpdateReplicationJobRequest;

class UpdateReplicationJobRequestPrivate : public SmsRequestPrivate {

public:
    UpdateReplicationJobRequestPrivate(const SmsRequest::Action action,
                                   UpdateReplicationJobRequest * const q);
    UpdateReplicationJobRequestPrivate(const UpdateReplicationJobRequestPrivate &other,
                                   UpdateReplicationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
