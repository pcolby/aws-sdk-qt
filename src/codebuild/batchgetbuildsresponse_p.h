// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDSRESPONSE_P_H
#define QTAWS_BATCHGETBUILDSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildsResponse;

class BatchGetBuildsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchGetBuildsResponsePrivate(BatchGetBuildsResponse * const q);

    void parseBatchGetBuildsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetBuildsResponse)
    Q_DISABLE_COPY(BatchGetBuildsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
