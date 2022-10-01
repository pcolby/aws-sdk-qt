// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPORTDEFINITIONRESPONSE_H
#define QTAWS_MODIFYREPORTDEFINITIONRESPONSE_H

#include "costandusagereportresponse.h"
#include "modifyreportdefinitionrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class ModifyReportDefinitionResponsePrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT ModifyReportDefinitionResponse : public CostandUsageReportResponse {
    Q_OBJECT

public:
    ModifyReportDefinitionResponse(const ModifyReportDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReportDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReportDefinitionResponse)
    Q_DISABLE_COPY(ModifyReportDefinitionResponse)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
