// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCOMMITSREQUEST_P_H
#define QTAWS_BATCHGETCOMMITSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "batchgetcommitsrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchGetCommitsRequest;

class BatchGetCommitsRequestPrivate : public CodeCommitRequestPrivate {

public:
    BatchGetCommitsRequestPrivate(const CodeCommitRequest::Action action,
                                   BatchGetCommitsRequest * const q);
    BatchGetCommitsRequestPrivate(const BatchGetCommitsRequestPrivate &other,
                                   BatchGetCommitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetCommitsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
