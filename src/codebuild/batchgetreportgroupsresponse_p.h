// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTGROUPSRESPONSE_P_H
#define QTAWS_BATCHGETREPORTGROUPSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportGroupsResponse;

class BatchGetReportGroupsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchGetReportGroupsResponsePrivate(BatchGetReportGroupsResponse * const q);

    void parseBatchGetReportGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetReportGroupsResponse)
    Q_DISABLE_COPY(BatchGetReportGroupsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
