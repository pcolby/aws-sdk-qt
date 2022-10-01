// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEPULLREQUESTAPPROVALRULESRESPONSE_H
#define QTAWS_EVALUATEPULLREQUESTAPPROVALRULESRESPONSE_H

#include "codecommitresponse.h"
#include "evaluatepullrequestapprovalrulesrequest.h"

namespace QtAws {
namespace CodeCommit {

class EvaluatePullRequestApprovalRulesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT EvaluatePullRequestApprovalRulesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    EvaluatePullRequestApprovalRulesResponse(const EvaluatePullRequestApprovalRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EvaluatePullRequestApprovalRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluatePullRequestApprovalRulesResponse)
    Q_DISABLE_COPY(EvaluatePullRequestApprovalRulesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
