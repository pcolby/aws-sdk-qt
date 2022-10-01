// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTDEFINITIONRESPONSE_H
#define QTAWS_DELETEREPORTDEFINITIONRESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "deletereportdefinitionrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class DeleteReportDefinitionResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT DeleteReportDefinitionResponse : public ApplicationCostProfilerResponse {
    Q_OBJECT

public:
    DeleteReportDefinitionResponse(const DeleteReportDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReportDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportDefinitionResponse)
    Q_DISABLE_COPY(DeleteReportDefinitionResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
