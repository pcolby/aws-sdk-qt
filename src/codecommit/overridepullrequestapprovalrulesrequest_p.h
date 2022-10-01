// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESREQUEST_P_H
#define QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "overridepullrequestapprovalrulesrequest.h"

namespace QtAws {
namespace CodeCommit {

class OverridePullRequestApprovalRulesRequest;

class OverridePullRequestApprovalRulesRequestPrivate : public CodeCommitRequestPrivate {

public:
    OverridePullRequestApprovalRulesRequestPrivate(const CodeCommitRequest::Action action,
                                   OverridePullRequestApprovalRulesRequest * const q);
    OverridePullRequestApprovalRulesRequestPrivate(const OverridePullRequestApprovalRulesRequestPrivate &other,
                                   OverridePullRequestApprovalRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(OverridePullRequestApprovalRulesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
