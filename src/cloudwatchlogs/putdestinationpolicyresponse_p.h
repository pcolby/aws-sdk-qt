// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONPOLICYRESPONSE_P_H
#define QTAWS_PUTDESTINATIONPOLICYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationPolicyResponse;

class PutDestinationPolicyResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutDestinationPolicyResponsePrivate(PutDestinationPolicyResponse * const q);

    void parsePutDestinationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDestinationPolicyResponse)
    Q_DISABLE_COPY(PutDestinationPolicyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
