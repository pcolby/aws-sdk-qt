// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTREQUEST_P_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatepullrequestapprovalrulecontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalRuleContentRequest;

class UpdatePullRequestApprovalRuleContentRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdatePullRequestApprovalRuleContentRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdatePullRequestApprovalRuleContentRequest * const q);
    UpdatePullRequestApprovalRuleContentRequestPrivate(const UpdatePullRequestApprovalRuleContentRequestPrivate &other,
                                   UpdatePullRequestApprovalRuleContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestApprovalRuleContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
