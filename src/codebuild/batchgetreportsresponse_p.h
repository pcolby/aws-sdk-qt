// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTSRESPONSE_P_H
#define QTAWS_BATCHGETREPORTSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportsResponse;

class BatchGetReportsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit BatchGetReportsResponsePrivate(BatchGetReportsResponse * const q);

    void parseBatchGetReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetReportsResponse)
    Q_DISABLE_COPY(BatchGetReportsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
