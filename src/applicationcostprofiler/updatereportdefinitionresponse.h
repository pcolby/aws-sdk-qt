// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTDEFINITIONRESPONSE_H
#define QTAWS_UPDATEREPORTDEFINITIONRESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "updatereportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class UpdateReportDefinitionResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT UpdateReportDefinitionResponse : public ApplicationCostProfilerResponse {
    Q_OBJECT

public:
    UpdateReportDefinitionResponse(const UpdateReportDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReportDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReportDefinitionResponse)
    Q_DISABLE_COPY(UpdateReportDefinitionResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
