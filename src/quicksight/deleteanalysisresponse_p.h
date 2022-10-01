// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISRESPONSE_P_H
#define QTAWS_DELETEANALYSISRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteAnalysisResponse;

class DeleteAnalysisResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteAnalysisResponsePrivate(DeleteAnalysisResponse * const q);

    void parseDeleteAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnalysisResponse)
    Q_DISABLE_COPY(DeleteAnalysisResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
