// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDRESPONSE_P_H
#define QTAWS_DESCRIBEDASHBOARDRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDashboardResponse;

class DescribeDashboardResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDashboardResponsePrivate(DescribeDashboardResponse * const q);

    void parseDescribeDashboardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDashboardResponse)
    Q_DISABLE_COPY(DescribeDashboardResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
