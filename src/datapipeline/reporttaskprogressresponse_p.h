// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKPROGRESSRESPONSE_P_H
#define QTAWS_REPORTTASKPROGRESSRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskProgressResponse;

class ReportTaskProgressResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit ReportTaskProgressResponsePrivate(ReportTaskProgressResponse * const q);

    void parseReportTaskProgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReportTaskProgressResponse)
    Q_DISABLE_COPY(ReportTaskProgressResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
