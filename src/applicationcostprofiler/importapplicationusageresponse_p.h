// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPLICATIONUSAGERESPONSE_P_H
#define QTAWS_IMPORTAPPLICATIONUSAGERESPONSE_P_H

#include "applicationcostprofilerresponse_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ImportApplicationUsageResponse;

class ImportApplicationUsageResponsePrivate : public ApplicationCostProfilerResponsePrivate {

public:

    explicit ImportApplicationUsageResponsePrivate(ImportApplicationUsageResponse * const q);

    void parseImportApplicationUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportApplicationUsageResponse)
    Q_DISABLE_COPY(ImportApplicationUsageResponsePrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
