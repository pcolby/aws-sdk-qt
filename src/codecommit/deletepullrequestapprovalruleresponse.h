// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLREQUESTAPPROVALRULERESPONSE_H
#define QTAWS_DELETEPULLREQUESTAPPROVALRULERESPONSE_H

#include "codecommitresponse.h"
#include "deletepullrequestapprovalrulerequest.h"

namespace QtAws {
namespace CodeCommit {

class DeletePullRequestApprovalRuleResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DeletePullRequestApprovalRuleResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DeletePullRequestApprovalRuleResponse(const DeletePullRequestApprovalRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePullRequestApprovalRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePullRequestApprovalRuleResponse)
    Q_DISABLE_COPY(DeletePullRequestApprovalRuleResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
