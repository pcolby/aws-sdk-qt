// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRIMPORTJOBSRESPONSE_H
#define QTAWS_LISTFHIRIMPORTJOBSRESPONSE_H

#include "healthlakeresponse.h"
#include "listfhirimportjobsrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRImportJobsResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRImportJobsResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    ListFHIRImportJobsResponse(const ListFHIRImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFHIRImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRImportJobsResponse)
    Q_DISABLE_COPY(ListFHIRImportJobsResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
