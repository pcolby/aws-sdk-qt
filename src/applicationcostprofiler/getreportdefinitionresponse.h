// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTDEFINITIONRESPONSE_H
#define QTAWS_GETREPORTDEFINITIONRESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "getreportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class GetReportDefinitionResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT GetReportDefinitionResponse : public ApplicationCostProfilerResponse {
    Q_OBJECT

public:
    GetReportDefinitionResponse(const GetReportDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReportDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReportDefinitionResponse)
    Q_DISABLE_COPY(GetReportDefinitionResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
