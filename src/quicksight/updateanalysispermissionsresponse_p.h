// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEANALYSISPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisPermissionsResponse;

class UpdateAnalysisPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateAnalysisPermissionsResponsePrivate(UpdateAnalysisPermissionsResponse * const q);

    void parseUpdateAnalysisPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnalysisPermissionsResponse)
    Q_DISABLE_COPY(UpdateAnalysisPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
