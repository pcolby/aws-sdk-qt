// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPREPLICATIONREQUEST_P_H
#define QTAWS_STOPAPPREPLICATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "stopappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StopAppReplicationRequest;

class StopAppReplicationRequestPrivate : public SmsRequestPrivate {

public:
    StopAppReplicationRequestPrivate(const SmsRequest::Action action,
                                   StopAppReplicationRequest * const q);
    StopAppReplicationRequestPrivate(const StopAppReplicationRequestPrivate &other,
                                   StopAppReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
