// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETARGETSREQUEST_P_H
#define QTAWS_REMOVETARGETSREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "removetargetsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class RemoveTargetsRequest;

class RemoveTargetsRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    RemoveTargetsRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   RemoveTargetsRequest * const q);
    RemoveTargetsRequestPrivate(const RemoveTargetsRequestPrivate &other,
                                   RemoveTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTargetsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
