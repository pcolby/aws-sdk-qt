// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMERGECONFLICTSREQUEST_P_H
#define QTAWS_BATCHDESCRIBEMERGECONFLICTSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "batchdescribemergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDescribeMergeConflictsRequest;

class BatchDescribeMergeConflictsRequestPrivate : public CodeCommitRequestPrivate {

public:
    BatchDescribeMergeConflictsRequestPrivate(const CodeCommitRequest::Action action,
                                   BatchDescribeMergeConflictsRequest * const q);
    BatchDescribeMergeConflictsRequestPrivate(const BatchDescribeMergeConflictsRequestPrivate &other,
                                   BatchDescribeMergeConflictsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDescribeMergeConflictsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
