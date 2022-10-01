// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLOGGINGREQUEST_P_H
#define QTAWS_STOPLOGGINGREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "stoploggingrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopLoggingRequest;

class StopLoggingRequestPrivate : public CloudTrailRequestPrivate {

public:
    StopLoggingRequestPrivate(const CloudTrailRequest::Action action,
                                   StopLoggingRequest * const q);
    StopLoggingRequestPrivate(const StopLoggingRequestPrivate &other,
                                   StopLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopLoggingRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
