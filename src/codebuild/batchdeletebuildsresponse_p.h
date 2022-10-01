// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEBUILDSRESPONSE_P_H
#define QTAWS_BATCHDELETEBUILDSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchDeleteBuildsResponse;

class BatchDeleteBuildsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchDeleteBuildsResponsePrivate(BatchDeleteBuildsResponse * const q);

    void parseBatchDeleteBuildsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteBuildsResponse)
    Q_DISABLE_COPY(BatchDeleteBuildsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
