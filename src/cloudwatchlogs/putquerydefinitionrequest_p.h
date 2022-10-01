// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTQUERYDEFINITIONREQUEST_P_H
#define QTAWS_PUTQUERYDEFINITIONREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putquerydefinitionrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutQueryDefinitionRequest;

class PutQueryDefinitionRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutQueryDefinitionRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutQueryDefinitionRequest * const q);
    PutQueryDefinitionRequestPrivate(const PutQueryDefinitionRequestPrivate &other,
                                   PutQueryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutQueryDefinitionRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
