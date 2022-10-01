// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONRESPONSE_P_H
#define QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPublishedVersionResponse;

class UpdateDashboardPublishedVersionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDashboardPublishedVersionResponsePrivate(UpdateDashboardPublishedVersionResponse * const q);

    void parseUpdateDashboardPublishedVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardPublishedVersionResponse)
    Q_DISABLE_COPY(UpdateDashboardPublishedVersionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
