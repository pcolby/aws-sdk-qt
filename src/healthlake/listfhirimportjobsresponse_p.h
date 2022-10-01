// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTFHIRIMPORTJOBSRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRImportJobsResponse;

class ListFHIRImportJobsResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit ListFHIRImportJobsResponsePrivate(ListFHIRImportJobsResponse * const q);

    void parseListFHIRImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFHIRImportJobsResponse)
    Q_DISABLE_COPY(ListFHIRImportJobsResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
