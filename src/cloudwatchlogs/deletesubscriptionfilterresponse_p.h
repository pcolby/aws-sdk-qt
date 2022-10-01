// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONFILTERRESPONSE_P_H
#define QTAWS_DELETESUBSCRIPTIONFILTERRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteSubscriptionFilterResponse;

class DeleteSubscriptionFilterResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteSubscriptionFilterResponsePrivate(DeleteSubscriptionFilterResponse * const q);

    void parseDeleteSubscriptionFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionFilterResponse)
    Q_DISABLE_COPY(DeleteSubscriptionFilterResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
