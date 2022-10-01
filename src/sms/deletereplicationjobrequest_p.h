// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONJOBREQUEST_P_H
#define QTAWS_DELETEREPLICATIONJOBREQUEST_P_H

#include "smsrequest_p.h"
#include "deletereplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class DeleteReplicationJobRequest;

class DeleteReplicationJobRequestPrivate : public SmsRequestPrivate {

public:
    DeleteReplicationJobRequestPrivate(const SmsRequest::Action action,
                                   DeleteReplicationJobRequest * const q);
    DeleteReplicationJobRequestPrivate(const DeleteReplicationJobRequestPrivate &other,
                                   DeleteReplicationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
