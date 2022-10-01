// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYSISRESPONSE_P_H
#define QTAWS_CREATEANALYSISRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateAnalysisResponse;

class CreateAnalysisResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateAnalysisResponsePrivate(CreateAnalysisResponse * const q);

    void parseCreateAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAnalysisResponse)
    Q_DISABLE_COPY(CreateAnalysisResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
