// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIREXPORTJOBRESPONSE_H
#define QTAWS_STARTFHIREXPORTJOBRESPONSE_H

#include "healthlakeresponse.h"
#include "startfhirexportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRExportJobResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT StartFHIRExportJobResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    StartFHIRExportJobResponse(const StartFHIRExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFHIRExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFHIRExportJobResponse)
    Q_DISABLE_COPY(StartFHIRExportJobResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
