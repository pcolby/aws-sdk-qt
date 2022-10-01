// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEPULLREQUESTAPPROVALRULESRESPONSE_P_H
#define QTAWS_EVALUATEPULLREQUESTAPPROVALRULESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class EvaluatePullRequestApprovalRulesResponse;

class EvaluatePullRequestApprovalRulesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit EvaluatePullRequestApprovalRulesResponsePrivate(EvaluatePullRequestApprovalRulesResponse * const q);

    void parseEvaluatePullRequestApprovalRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvaluatePullRequestApprovalRulesResponse)
    Q_DISABLE_COPY(EvaluatePullRequestApprovalRulesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
