// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYDEFINITIONREQUEST_P_H
#define QTAWS_DELETEQUERYDEFINITIONREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deletequerydefinitionrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteQueryDefinitionRequest;

class DeleteQueryDefinitionRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteQueryDefinitionRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteQueryDefinitionRequest * const q);
    DeleteQueryDefinitionRequestPrivate(const DeleteQueryDefinitionRequestPrivate &other,
                                   DeleteQueryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueryDefinitionRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
