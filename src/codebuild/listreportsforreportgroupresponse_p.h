// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSFORREPORTGROUPRESPONSE_P_H
#define QTAWS_LISTREPORTSFORREPORTGROUPRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsForReportGroupResponse;

class ListReportsForReportGroupResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListReportsForReportGroupResponsePrivate(ListReportsForReportGroupResponse * const q);

    void parseListReportsForReportGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportsForReportGroupResponse)
    Q_DISABLE_COPY(ListReportsForReportGroupResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
