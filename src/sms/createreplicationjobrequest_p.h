// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONJOBREQUEST_P_H
#define QTAWS_CREATEREPLICATIONJOBREQUEST_P_H

#include "smsrequest_p.h"
#include "createreplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class CreateReplicationJobRequest;

class CreateReplicationJobRequestPrivate : public SmsRequestPrivate {

public:
    CreateReplicationJobRequestPrivate(const SmsRequest::Action action,
                                   CreateReplicationJobRequest * const q);
    CreateReplicationJobRequestPrivate(const CreateReplicationJobRequestPrivate &other,
                                   CreateReplicationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
