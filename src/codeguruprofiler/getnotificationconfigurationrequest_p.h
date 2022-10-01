// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETNOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "getnotificationconfigurationrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetNotificationConfigurationRequest;

class GetNotificationConfigurationRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    GetNotificationConfigurationRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   GetNotificationConfigurationRequest * const q);
    GetNotificationConfigurationRequestPrivate(const GetNotificationConfigurationRequestPrivate &other,
                                   GetNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNotificationConfigurationRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
