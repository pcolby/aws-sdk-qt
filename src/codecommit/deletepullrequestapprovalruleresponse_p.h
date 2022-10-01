// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLREQUESTAPPROVALRULERESPONSE_P_H
#define QTAWS_DELETEPULLREQUESTAPPROVALRULERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DeletePullRequestApprovalRuleResponse;

class DeletePullRequestApprovalRuleResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DeletePullRequestApprovalRuleResponsePrivate(DeletePullRequestApprovalRuleResponse * const q);

    void parseDeletePullRequestApprovalRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePullRequestApprovalRuleResponse)
    Q_DISABLE_COPY(DeletePullRequestApprovalRuleResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
