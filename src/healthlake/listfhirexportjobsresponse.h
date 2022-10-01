// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIREXPORTJOBSRESPONSE_H
#define QTAWS_LISTFHIREXPORTJOBSRESPONSE_H

#include "healthlakeresponse.h"
#include "listfhirexportjobsrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRExportJobsResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRExportJobsResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    ListFHIRExportJobsResponse(const ListFHIRExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFHIRExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRExportJobsResponse)
    Q_DISABLE_COPY(ListFHIRExportJobsResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
