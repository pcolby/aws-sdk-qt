// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDASHBOARDRESPONSE_P_H
#define QTAWS_PUTDASHBOARDRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutDashboardResponse;

class PutDashboardResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutDashboardResponsePrivate(PutDashboardResponse * const q);

    void parsePutDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDashboardResponse)
    Q_DISABLE_COPY(PutDashboardResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
