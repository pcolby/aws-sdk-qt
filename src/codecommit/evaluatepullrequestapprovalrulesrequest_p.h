// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEPULLREQUESTAPPROVALRULESREQUEST_P_H
#define QTAWS_EVALUATEPULLREQUESTAPPROVALRULESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "evaluatepullrequestapprovalrulesrequest.h"

namespace QtAws {
namespace CodeCommit {

class EvaluatePullRequestApprovalRulesRequest;

class EvaluatePullRequestApprovalRulesRequestPrivate : public CodeCommitRequestPrivate {

public:
    EvaluatePullRequestApprovalRulesRequestPrivate(const CodeCommitRequest::Action action,
                                   EvaluatePullRequestApprovalRulesRequest * const q);
    EvaluatePullRequestApprovalRulesRequestPrivate(const EvaluatePullRequestApprovalRulesRequestPrivate &other,
                                   EvaluatePullRequestApprovalRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(EvaluatePullRequestApprovalRulesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
