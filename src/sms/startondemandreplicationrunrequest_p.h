// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDREPLICATIONRUNREQUEST_P_H
#define QTAWS_STARTONDEMANDREPLICATIONRUNREQUEST_P_H

#include "smsrequest_p.h"
#include "startondemandreplicationrunrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandReplicationRunRequest;

class StartOnDemandReplicationRunRequestPrivate : public SmsRequestPrivate {

public:
    StartOnDemandReplicationRunRequestPrivate(const SmsRequest::Action action,
                                   StartOnDemandReplicationRunRequest * const q);
    StartOnDemandReplicationRunRequestPrivate(const StartOnDemandReplicationRunRequestPrivate &other,
                                   StartOnDemandReplicationRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartOnDemandReplicationRunRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
