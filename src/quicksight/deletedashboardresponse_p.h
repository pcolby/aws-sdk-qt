// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDRESPONSE_P_H
#define QTAWS_DELETEDASHBOARDRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteDashboardResponse;

class DeleteDashboardResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteDashboardResponsePrivate(DeleteDashboardResponse * const q);

    void parseDeleteDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDashboardResponse)
    Q_DISABLE_COPY(DeleteDashboardResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
