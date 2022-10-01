// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPEVENTSREQUEST_P_H
#define QTAWS_LOOKUPEVENTSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "lookupeventsrequest.h"

namespace QtAws {
namespace CloudTrail {

class LookupEventsRequest;

class LookupEventsRequestPrivate : public CloudTrailRequestPrivate {

public:
    LookupEventsRequestPrivate(const CloudTrailRequest::Action action,
                                   LookupEventsRequest * const q);
    LookupEventsRequestPrivate(const LookupEventsRequestPrivate &other,
                                   LookupEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(LookupEventsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
