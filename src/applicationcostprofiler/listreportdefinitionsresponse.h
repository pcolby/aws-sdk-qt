// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTDEFINITIONSRESPONSE_H
#define QTAWS_LISTREPORTDEFINITIONSRESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "listreportdefinitionsrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ListReportDefinitionsResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ListReportDefinitionsResponse : public ApplicationCostProfilerResponse {
    Q_OBJECT

public:
    ListReportDefinitionsResponse(const ListReportDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportDefinitionsResponse)
    Q_DISABLE_COPY(ListReportDefinitionsResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
