// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPREPLICATIONREQUEST_P_H
#define QTAWS_STARTAPPREPLICATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "startappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StartAppReplicationRequest;

class StartAppReplicationRequestPrivate : public SmsRequestPrivate {

public:
    StartAppReplicationRequestPrivate(const SmsRequest::Action action,
                                   StartAppReplicationRequest * const q);
    StartAppReplicationRequestPrivate(const StartAppReplicationRequestPrivate &other,
                                   StartAppReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
