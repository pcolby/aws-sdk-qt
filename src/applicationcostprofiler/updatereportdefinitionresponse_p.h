// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATEREPORTDEFINITIONRESPONSE_P_H

#include "applicationcostprofilerresponse_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class UpdateReportDefinitionResponse;

class UpdateReportDefinitionResponsePrivate : public ApplicationCostProfilerResponsePrivate {

public:

    explicit UpdateReportDefinitionResponsePrivate(UpdateReportDefinitionResponse * const q);

    void parseUpdateReportDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReportDefinitionResponse)
    Q_DISABLE_COPY(UpdateReportDefinitionResponsePrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
