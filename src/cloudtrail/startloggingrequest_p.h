// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLOGGINGREQUEST_P_H
#define QTAWS_STARTLOGGINGREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "startloggingrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartLoggingRequest;

class StartLoggingRequestPrivate : public CloudTrailRequestPrivate {

public:
    StartLoggingRequestPrivate(const CloudTrailRequest::Action action,
                                   StartLoggingRequest * const q);
    StartLoggingRequestPrivate(const StartLoggingRequestPrivate &other,
                                   StartLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartLoggingRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
