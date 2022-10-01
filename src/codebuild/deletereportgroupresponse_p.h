// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTGROUPRESPONSE_P_H
#define QTAWS_DELETEREPORTGROUPRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportGroupResponse;

class DeleteReportGroupResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DeleteReportGroupResponsePrivate(DeleteReportGroupResponse * const q);

    void parseDeleteReportGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReportGroupResponse)
    Q_DISABLE_COPY(DeleteReportGroupResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
