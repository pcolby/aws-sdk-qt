// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDSRESPONSE_P_H
#define QTAWS_DELETEDASHBOARDSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DeleteDashboardsResponse;

class DeleteDashboardsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DeleteDashboardsResponsePrivate(DeleteDashboardsResponse * const q);

    void parseDeleteDashboardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDashboardsResponse)
    Q_DISABLE_COPY(DeleteDashboardsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
