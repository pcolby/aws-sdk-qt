// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBRANCHREQUEST_P_H
#define QTAWS_DELETEBRANCHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deletebranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteBranchRequest;

class DeleteBranchRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteBranchRequestPrivate(const CodeCommitRequest::Action action,
                                   DeleteBranchRequest * const q);
    DeleteBranchRequestPrivate(const DeleteBranchRequestPrivate &other,
                                   DeleteBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
