// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMERGECONFLICTSRESPONSE_P_H
#define QTAWS_BATCHDESCRIBEMERGECONFLICTSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class BatchDescribeMergeConflictsResponse;

class BatchDescribeMergeConflictsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit BatchDescribeMergeConflictsResponsePrivate(BatchDescribeMergeConflictsResponse * const q);

    void parseBatchDescribeMergeConflictsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDescribeMergeConflictsResponse)
    Q_DISABLE_COPY(BatchDescribeMergeConflictsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
