// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICFILTERRESPONSE_P_H
#define QTAWS_DELETEMETRICFILTERRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteMetricFilterResponse;

class DeleteMetricFilterResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteMetricFilterResponsePrivate(DeleteMetricFilterResponse * const q);

    void parseDeleteMetricFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMetricFilterResponse)
    Q_DISABLE_COPY(DeleteMetricFilterResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
