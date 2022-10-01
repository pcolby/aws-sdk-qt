// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIREXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEFHIREXPORTJOBRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRExportJobResponse;

class DescribeFHIRExportJobResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit DescribeFHIRExportJobResponsePrivate(DescribeFHIRExportJobResponse * const q);

    void parseDescribeFHIRExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRExportJobResponse)
    Q_DISABLE_COPY(DescribeFHIRExportJobResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
