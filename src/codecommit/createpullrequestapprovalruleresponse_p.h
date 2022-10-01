// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTAPPROVALRULERESPONSE_P_H
#define QTAWS_CREATEPULLREQUESTAPPROVALRULERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestApprovalRuleResponse;

class CreatePullRequestApprovalRuleResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreatePullRequestApprovalRuleResponsePrivate(CreatePullRequestApprovalRuleResponse * const q);

    void parseCreatePullRequestApprovalRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePullRequestApprovalRuleResponse)
    Q_DISABLE_COPY(CreatePullRequestApprovalRuleResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
