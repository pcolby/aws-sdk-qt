// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEFHIRIMPORTJOBRESPONSE_H

#include "healthlakeresponse.h"
#include "describefhirimportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRImportJobResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRImportJobResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    DescribeFHIRImportJobResponse(const DescribeFHIRImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFHIRImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRImportJobResponse)
    Q_DISABLE_COPY(DescribeFHIRImportJobResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
