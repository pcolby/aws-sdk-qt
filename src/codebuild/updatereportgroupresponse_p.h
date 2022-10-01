// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTGROUPRESPONSE_P_H
#define QTAWS_UPDATEREPORTGROUPRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class UpdateReportGroupResponse;

class UpdateReportGroupResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit UpdateReportGroupResponsePrivate(UpdateReportGroupResponse * const q);

    void parseUpdateReportGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReportGroupResponse)
    Q_DISABLE_COPY(UpdateReportGroupResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
