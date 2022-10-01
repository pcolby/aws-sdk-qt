// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORIESRESPONSE_P_H
#define QTAWS_BATCHGETREPOSITORIESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetRepositoriesResponse;

class BatchGetRepositoriesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit BatchGetRepositoriesResponsePrivate(BatchGetRepositoriesResponse * const q);

    void parseBatchGetRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetRepositoriesResponse)
    Q_DISABLE_COPY(BatchGetRepositoriesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
