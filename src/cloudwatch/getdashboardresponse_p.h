// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDRESPONSE_P_H
#define QTAWS_GETDASHBOARDRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetDashboardResponse;

class GetDashboardResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetDashboardResponsePrivate(GetDashboardResponse * const q);

    void parseGetDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDashboardResponse)
    Q_DISABLE_COPY(GetDashboardResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
