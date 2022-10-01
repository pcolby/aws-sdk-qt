// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTAPPROVALRULEREQUEST_P_H
#define QTAWS_CREATEPULLREQUESTAPPROVALRULEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createpullrequestapprovalrulerequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestApprovalRuleRequest;

class CreatePullRequestApprovalRuleRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreatePullRequestApprovalRuleRequestPrivate(const CodeCommitRequest::Action action,
                                   CreatePullRequestApprovalRuleRequest * const q);
    CreatePullRequestApprovalRuleRequestPrivate(const CreatePullRequestApprovalRuleRequestPrivate &other,
                                   CreatePullRequestApprovalRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePullRequestApprovalRuleRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
