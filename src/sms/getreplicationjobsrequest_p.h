// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONJOBSREQUEST_P_H
#define QTAWS_GETREPLICATIONJOBSREQUEST_P_H

#include "smsrequest_p.h"
#include "getreplicationjobsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationJobsRequest;

class GetReplicationJobsRequestPrivate : public SmsRequestPrivate {

public:
    GetReplicationJobsRequestPrivate(const SmsRequest::Action action,
                                   GetReplicationJobsRequest * const q);
    GetReplicationJobsRequestPrivate(const GetReplicationJobsRequestPrivate &other,
                                   GetReplicationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationJobsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
