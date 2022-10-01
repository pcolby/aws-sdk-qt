// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUNREFERENCEDMERGECOMMITREQUEST_P_H
#define QTAWS_CREATEUNREFERENCEDMERGECOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createunreferencedmergecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateUnreferencedMergeCommitRequest;

class CreateUnreferencedMergeCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreateUnreferencedMergeCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   CreateUnreferencedMergeCommitRequest * const q);
    CreateUnreferencedMergeCommitRequestPrivate(const CreateUnreferencedMergeCommitRequestPrivate &other,
                                   CreateUnreferencedMergeCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUnreferencedMergeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
