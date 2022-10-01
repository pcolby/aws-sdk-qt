// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTAPPROVALRULERESPONSE_H
#define QTAWS_CREATEPULLREQUESTAPPROVALRULERESPONSE_H

#include "codecommitresponse.h"
#include "createpullrequestapprovalrulerequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestApprovalRuleResponsePrivate;

class QTAWSCODECOMMIT_EXPORT CreatePullRequestApprovalRuleResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    CreatePullRequestApprovalRuleResponse(const CreatePullRequestApprovalRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePullRequestApprovalRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullRequestApprovalRuleResponse)
    Q_DISABLE_COPY(CreatePullRequestApprovalRuleResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
