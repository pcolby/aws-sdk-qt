// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSCOVERAGERESPONSE_P_H
#define QTAWS_GETSAVINGSPLANSCOVERAGERESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansCoverageResponse;

class GetSavingsPlansCoverageResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetSavingsPlansCoverageResponsePrivate(GetSavingsPlansCoverageResponse * const q);

    void parseGetSavingsPlansCoverageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansCoverageResponse)
    Q_DISABLE_COPY(GetSavingsPlansCoverageResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
