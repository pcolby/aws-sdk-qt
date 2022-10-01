// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGECOMMITREQUEST_P_H
#define QTAWS_GETMERGECOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getmergecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeCommitRequest;

class GetMergeCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetMergeCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   GetMergeCommitRequest * const q);
    GetMergeCommitRequestPrivate(const GetMergeCommitRequestPrivate &other,
                                   GetMergeCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMergeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
