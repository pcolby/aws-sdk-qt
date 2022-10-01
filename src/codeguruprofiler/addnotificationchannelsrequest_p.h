// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELSREQUEST_P_H
#define QTAWS_ADDNOTIFICATIONCHANNELSREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "addnotificationchannelsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class AddNotificationChannelsRequest;

class AddNotificationChannelsRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    AddNotificationChannelsRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   AddNotificationChannelsRequest * const q);
    AddNotificationChannelsRequestPrivate(const AddNotificationChannelsRequestPrivate &other,
                                   AddNotificationChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddNotificationChannelsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
