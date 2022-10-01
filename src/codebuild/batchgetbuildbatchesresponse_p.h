// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDBATCHESRESPONSE_P_H
#define QTAWS_BATCHGETBUILDBATCHESRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildBatchesResponse;

class BatchGetBuildBatchesResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchGetBuildBatchesResponsePrivate(BatchGetBuildBatchesResponse * const q);

    void parseBatchGetBuildBatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetBuildBatchesResponse)
    Q_DISABLE_COPY(BatchGetBuildBatchesResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
