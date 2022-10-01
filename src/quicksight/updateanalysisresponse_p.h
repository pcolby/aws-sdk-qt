// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISRESPONSE_P_H
#define QTAWS_UPDATEANALYSISRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisResponse;

class UpdateAnalysisResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateAnalysisResponsePrivate(UpdateAnalysisResponse * const q);

    void parseUpdateAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnalysisResponse)
    Q_DISABLE_COPY(UpdateAnalysisResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
