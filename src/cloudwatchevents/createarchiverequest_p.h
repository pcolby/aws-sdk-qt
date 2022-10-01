// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVEREQUEST_P_H
#define QTAWS_CREATEARCHIVEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "createarchiverequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateArchiveRequest;

class CreateArchiveRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    CreateArchiveRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   CreateArchiveRequest * const q);
    CreateArchiveRequestPrivate(const CreateArchiveRequestPrivate &other,
                                   CreateArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateArchiveRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
