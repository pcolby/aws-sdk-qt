// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIRIMPORTJOBRESPONSE_P_H
#define QTAWS_STARTFHIRIMPORTJOBRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRImportJobResponse;

class StartFHIRImportJobResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit StartFHIRImportJobResponsePrivate(StartFHIRImportJobResponse * const q);

    void parseStartFHIRImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFHIRImportJobResponse)
    Q_DISABLE_COPY(StartFHIRImportJobResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
