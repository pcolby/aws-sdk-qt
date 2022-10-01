// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYRESPONSE_P_H
#define QTAWS_PUTRETENTIONPOLICYRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutRetentionPolicyResponse;

class PutRetentionPolicyResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutRetentionPolicyResponsePrivate(PutRetentionPolicyResponse * const q);

    void parsePutRetentionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRetentionPolicyResponse)
    Q_DISABLE_COPY(PutRetentionPolicyResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
