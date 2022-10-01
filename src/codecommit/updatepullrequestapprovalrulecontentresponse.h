// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTRESPONSE_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTRESPONSE_H

#include "codecommitresponse.h"
#include "updatepullrequestapprovalrulecontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalRuleContentResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestApprovalRuleContentResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdatePullRequestApprovalRuleContentResponse(const UpdatePullRequestApprovalRuleContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePullRequestApprovalRuleContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestApprovalRuleContentResponse)
    Q_DISABLE_COPY(UpdatePullRequestApprovalRuleContentResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
