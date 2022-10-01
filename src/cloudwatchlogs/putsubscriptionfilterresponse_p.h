// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUBSCRIPTIONFILTERRESPONSE_P_H
#define QTAWS_PUTSUBSCRIPTIONFILTERRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutSubscriptionFilterResponse;

class PutSubscriptionFilterResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutSubscriptionFilterResponsePrivate(PutSubscriptionFilterResponse * const q);

    void parsePutSubscriptionFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSubscriptionFilterResponse)
    Q_DISABLE_COPY(PutSubscriptionFilterResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
