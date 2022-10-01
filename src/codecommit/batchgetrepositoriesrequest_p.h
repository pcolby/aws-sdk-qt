// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPOSITORIESREQUEST_P_H
#define QTAWS_BATCHGETREPOSITORIESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "batchgetrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetRepositoriesRequest;

class BatchGetRepositoriesRequestPrivate : public CodeCommitRequestPrivate {

public:
    BatchGetRepositoriesRequestPrivate(const CodeCommitRequest::Action action,
                                   BatchGetRepositoriesRequest * const q);
    BatchGetRepositoriesRequestPrivate(const BatchGetRepositoriesRequestPrivate &other,
                                   BatchGetRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
