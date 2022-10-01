// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBRANCHREQUEST_P_H
#define QTAWS_CREATEBRANCHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateBranchRequest;

class CreateBranchRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreateBranchRequestPrivate(const CodeCommitRequest::Action action,
                                   CreateBranchRequest * const q);
    CreateBranchRequestPrivate(const CreateBranchRequestPrivate &other,
                                   CreateBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
