// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMERGECONFLICTSREQUEST_P_H
#define QTAWS_DESCRIBEMERGECONFLICTSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "describemergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class DescribeMergeConflictsRequest;

class DescribeMergeConflictsRequestPrivate : public CodeCommitRequestPrivate {

public:
    DescribeMergeConflictsRequestPrivate(const CodeCommitRequest::Action action,
                                   DescribeMergeConflictsRequest * const q);
    DescribeMergeConflictsRequestPrivate(const DescribeMergeConflictsRequestPrivate &other,
                                   DescribeMergeConflictsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMergeConflictsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
