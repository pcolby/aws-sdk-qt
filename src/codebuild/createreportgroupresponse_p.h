// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTGROUPRESPONSE_P_H
#define QTAWS_CREATEREPORTGROUPRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class CreateReportGroupResponse;

class CreateReportGroupResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit CreateReportGroupResponsePrivate(CreateReportGroupResponse * const q);

    void parseCreateReportGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReportGroupResponse)
    Q_DISABLE_COPY(CreateReportGroupResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
