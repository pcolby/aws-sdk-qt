// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONRESPONSE_H
#define QTAWS_PUTREPORTDEFINITIONRESPONSE_H

#include "costandusagereportresponse.h"
#include "putreportdefinitionrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class PutReportDefinitionResponsePrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT PutReportDefinitionResponse : public CostandUsageReportResponse {
    Q_OBJECT

public:
    PutReportDefinitionResponse(const PutReportDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutReportDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutReportDefinitionResponse)
    Q_DISABLE_COPY(PutReportDefinitionResponse)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
