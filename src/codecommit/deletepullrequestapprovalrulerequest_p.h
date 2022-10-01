// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLREQUESTAPPROVALRULEREQUEST_P_H
#define QTAWS_DELETEPULLREQUESTAPPROVALRULEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deletepullrequestapprovalrulerequest.h"

namespace QtAws {
namespace CodeCommit {

class DeletePullRequestApprovalRuleRequest;

class DeletePullRequestApprovalRuleRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeletePullRequestApprovalRuleRequestPrivate(const CodeCommitRequest::Action action,
                                   DeletePullRequestApprovalRuleRequest * const q);
    DeletePullRequestApprovalRuleRequestPrivate(const DeletePullRequestApprovalRuleRequestPrivate &other,
                                   DeletePullRequestApprovalRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePullRequestApprovalRuleRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
