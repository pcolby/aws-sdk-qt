// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKPROGRESSRESPONSE_H
#define QTAWS_REPORTTASKPROGRESSRESPONSE_H

#include "datapipelineresponse.h"
#include "reporttaskprogressrequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskProgressResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT ReportTaskProgressResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    ReportTaskProgressResponse(const ReportTaskProgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReportTaskProgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportTaskProgressResponse)
    Q_DISABLE_COPY(ReportTaskProgressResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
