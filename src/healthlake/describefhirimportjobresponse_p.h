// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEFHIRIMPORTJOBRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRImportJobResponse;

class DescribeFHIRImportJobResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit DescribeFHIRImportJobResponsePrivate(DescribeFHIRImportJobResponse * const q);

    void parseDescribeFHIRImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRImportJobResponse)
    Q_DISABLE_COPY(DescribeFHIRImportJobResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
