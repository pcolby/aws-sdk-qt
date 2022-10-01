// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPROJECTSRESPONSE_P_H
#define QTAWS_BATCHGETPROJECTSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetProjectsResponse;

class BatchGetProjectsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchGetProjectsResponsePrivate(BatchGetProjectsResponse * const q);

    void parseBatchGetProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetProjectsResponse)
    Q_DISABLE_COPY(BatchGetProjectsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
