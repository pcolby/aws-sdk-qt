// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONRESPONSE_H
#define QTAWS_PUTREPORTDEFINITIONRESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "putreportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class PutReportDefinitionResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT PutReportDefinitionResponse : public ApplicationCostProfilerResponse {
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

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
