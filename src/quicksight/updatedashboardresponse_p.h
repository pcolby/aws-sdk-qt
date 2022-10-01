// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDRESPONSE_P_H
#define QTAWS_UPDATEDASHBOARDRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardResponse;

class UpdateDashboardResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDashboardResponsePrivate(UpdateDashboardResponse * const q);

    void parseUpdateDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardResponse)
    Q_DISABLE_COPY(UpdateDashboardResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
