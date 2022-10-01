// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHREQUEST_P_H
#define QTAWS_GETBRANCHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getbranchrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBranchRequest;

class GetBranchRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetBranchRequestPrivate(const CodeCommitRequest::Action action,
                                   GetBranchRequest * const q);
    GetBranchRequestPrivate(const GetBranchRequestPrivate &other,
                                   GetBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
