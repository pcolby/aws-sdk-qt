// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIREXPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEFHIREXPORTJOBRESPONSE_H

#include "healthlakeresponse.h"
#include "describefhirexportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRExportJobResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRExportJobResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    DescribeFHIRExportJobResponse(const DescribeFHIRExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFHIRExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRExportJobResponse)
    Q_DISABLE_COPY(DescribeFHIRExportJobResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
