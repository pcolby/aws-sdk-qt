// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIRIMPORTJOBRESPONSE_H
#define QTAWS_STARTFHIRIMPORTJOBRESPONSE_H

#include "healthlakeresponse.h"
#include "startfhirimportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRImportJobResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT StartFHIRImportJobResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    StartFHIRImportJobResponse(const StartFHIRImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFHIRImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFHIRImportJobResponse)
    Q_DISABLE_COPY(StartFHIRImportJobResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
