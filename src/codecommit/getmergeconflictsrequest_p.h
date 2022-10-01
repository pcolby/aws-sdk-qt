// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECONFLICTSREQUEST_P_H
#define QTAWS_GETMERGECONFLICTSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getmergeconflictsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeConflictsRequest;

class GetMergeConflictsRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetMergeConflictsRequestPrivate(const CodeCommitRequest::Action action,
                                   GetMergeConflictsRequest * const q);
    GetMergeConflictsRequestPrivate(const GetMergeConflictsRequestPrivate &other,
                                   GetMergeConflictsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMergeConflictsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
