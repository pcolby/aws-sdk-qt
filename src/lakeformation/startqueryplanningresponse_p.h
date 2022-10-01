// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYPLANNINGRESPONSE_P_H
#define QTAWS_STARTQUERYPLANNINGRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class StartQueryPlanningResponse;

class StartQueryPlanningResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit StartQueryPlanningResponsePrivate(StartQueryPlanningResponse * const q);

    void parseStartQueryPlanningResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartQueryPlanningResponse)
    Q_DISABLE_COPY(StartQueryPlanningResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
