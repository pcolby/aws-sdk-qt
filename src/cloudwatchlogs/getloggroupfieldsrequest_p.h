// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGROUPFIELDSREQUEST_P_H
#define QTAWS_GETLOGGROUPFIELDSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "getloggroupfieldsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogGroupFieldsRequest;

class GetLogGroupFieldsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    GetLogGroupFieldsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   GetLogGroupFieldsRequest * const q);
    GetLogGroupFieldsRequestPrivate(const GetLogGroupFieldsRequestPrivate &other,
                                   GetLogGroupFieldsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLogGroupFieldsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
