// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONRUNSREQUEST_P_H
#define QTAWS_GETREPLICATIONRUNSREQUEST_P_H

#include "smsrequest_p.h"
#include "getreplicationrunsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationRunsRequest;

class GetReplicationRunsRequestPrivate : public SmsRequestPrivate {

public:
    GetReplicationRunsRequestPrivate(const SmsRequest::Action action,
                                   GetReplicationRunsRequest * const q);
    GetReplicationRunsRequestPrivate(const GetReplicationRunsRequestPrivate &other,
                                   GetReplicationRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationRunsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
