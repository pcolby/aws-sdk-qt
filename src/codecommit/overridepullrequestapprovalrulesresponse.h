// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESRESPONSE_H
#define QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESRESPONSE_H

#include "codecommitresponse.h"
#include "overridepullrequestapprovalrulesrequest.h"

namespace QtAws {
namespace CodeCommit {

class OverridePullRequestApprovalRulesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT OverridePullRequestApprovalRulesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    OverridePullRequestApprovalRulesResponse(const OverridePullRequestApprovalRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const OverridePullRequestApprovalRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OverridePullRequestApprovalRulesResponse)
    Q_DISABLE_COPY(OverridePullRequestApprovalRulesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
