// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIREXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTFHIREXPORTJOBSRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRExportJobsResponse;

class ListFHIRExportJobsResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit ListFHIRExportJobsResponsePrivate(ListFHIRExportJobsResponse * const q);

    void parseListFHIRExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFHIRExportJobsResponse)
    Q_DISABLE_COPY(ListFHIRExportJobsResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
