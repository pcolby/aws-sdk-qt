// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCOMMITSRESPONSE_P_H
#define QTAWS_BATCHGETCOMMITSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetCommitsResponse;

class BatchGetCommitsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit BatchGetCommitsResponsePrivate(BatchGetCommitsResponse * const q);

    void parseBatchGetCommitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetCommitsResponse)
    Q_DISABLE_COPY(BatchGetCommitsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
