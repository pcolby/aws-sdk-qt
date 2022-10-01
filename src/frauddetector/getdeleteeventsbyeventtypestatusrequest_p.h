// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSREQUEST_P_H
#define QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getdeleteeventsbyeventtypestatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDeleteEventsByEventTypeStatusRequest;

class GetDeleteEventsByEventTypeStatusRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetDeleteEventsByEventTypeStatusRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetDeleteEventsByEventTypeStatusRequest * const q);
    GetDeleteEventsByEventTypeStatusRequestPrivate(const GetDeleteEventsByEventTypeStatusRequestPrivate &other,
                                   GetDeleteEventsByEventTypeStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeleteEventsByEventTypeStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
