// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_P_H
#define QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "removenotificationchannelrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class RemoveNotificationChannelRequest;

class RemoveNotificationChannelRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    RemoveNotificationChannelRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   RemoveNotificationChannelRequest * const q);
    RemoveNotificationChannelRequestPrivate(const RemoveNotificationChannelRequestPrivate &other,
                                   RemoveNotificationChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveNotificationChannelRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
