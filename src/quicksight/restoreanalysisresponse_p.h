// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREANALYSISRESPONSE_P_H
#define QTAWS_RESTOREANALYSISRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class RestoreAnalysisResponse;

class RestoreAnalysisResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit RestoreAnalysisResponsePrivate(RestoreAnalysisResponse * const q);

    void parseRestoreAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreAnalysisResponse)
    Q_DISABLE_COPY(RestoreAnalysisResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
