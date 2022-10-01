// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBRANCHESREQUEST_P_H
#define QTAWS_LISTBRANCHESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listbranchesrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListBranchesRequest;

class ListBranchesRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListBranchesRequestPrivate(const CodeCommitRequest::Action action,
                                   ListBranchesRequest * const q);
    ListBranchesRequestPrivate(const ListBranchesRequestPrivate &other,
                                   ListBranchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBranchesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
