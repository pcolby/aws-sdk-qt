// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPULLREQUESTSREQUEST_P_H
#define QTAWS_LISTPULLREQUESTSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listpullrequestsrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListPullRequestsRequest;

class ListPullRequestsRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListPullRequestsRequestPrivate(const CodeCommitRequest::Action action,
                                   ListPullRequestsRequest * const q);
    ListPullRequestsRequestPrivate(const ListPullRequestsRequestPrivate &other,
                                   ListPullRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPullRequestsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
