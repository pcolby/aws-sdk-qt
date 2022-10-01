// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAPPREPLICATIONREQUEST_P_H
#define QTAWS_STARTONDEMANDAPPREPLICATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "startondemandappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandAppReplicationRequest;

class StartOnDemandAppReplicationRequestPrivate : public SmsRequestPrivate {

public:
    StartOnDemandAppReplicationRequestPrivate(const SmsRequest::Action action,
                                   StartOnDemandAppReplicationRequest * const q);
    StartOnDemandAppReplicationRequestPrivate(const StartOnDemandAppReplicationRequestPrivate &other,
                                   StartOnDemandAppReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartOnDemandAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
