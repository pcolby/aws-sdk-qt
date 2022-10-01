// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTREPORTDEFINITIONSRESPONSE_P_H

#include "applicationcostprofilerresponse_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ListReportDefinitionsResponse;

class ListReportDefinitionsResponsePrivate : public ApplicationCostProfilerResponsePrivate {

public:

    explicit ListReportDefinitionsResponsePrivate(ListReportDefinitionsResponse * const q);

    void parseListReportDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportDefinitionsResponse)
    Q_DISABLE_COPY(ListReportDefinitionsResponsePrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
