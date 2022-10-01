// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTAPPROVALSTATESREQUEST_P_H
#define QTAWS_GETPULLREQUESTAPPROVALSTATESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getpullrequestapprovalstatesrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestApprovalStatesRequest;

class GetPullRequestApprovalStatesRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetPullRequestApprovalStatesRequestPrivate(const CodeCommitRequest::Action action,
                                   GetPullRequestApprovalStatesRequest * const q);
    GetPullRequestApprovalStatesRequestPrivate(const GetPullRequestApprovalStatesRequestPrivate &other,
                                   GetPullRequestApprovalStatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPullRequestApprovalStatesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
