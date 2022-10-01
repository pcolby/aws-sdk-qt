// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIREXPORTJOBRESPONSE_P_H
#define QTAWS_STARTFHIREXPORTJOBRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRExportJobResponse;

class StartFHIRExportJobResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit StartFHIRExportJobResponsePrivate(StartFHIRExportJobResponse * const q);

    void parseStartFHIRExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFHIRExportJobResponse)
    Q_DISABLE_COPY(StartFHIRExportJobResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
