// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTDEFINITIONRESPONSE_P_H
#define QTAWS_GETREPORTDEFINITIONRESPONSE_P_H

#include "applicationcostprofilerresponse_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class GetReportDefinitionResponse;

class GetReportDefinitionResponsePrivate : public ApplicationCostProfilerResponsePrivate {

public:

    explicit GetReportDefinitionResponsePrivate(GetReportDefinitionResponse * const q);

    void parseGetReportDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReportDefinitionResponse)
    Q_DISABLE_COPY(GetReportDefinitionResponsePrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
