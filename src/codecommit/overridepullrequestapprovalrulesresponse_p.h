// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESRESPONSE_P_H
#define QTAWS_OVERRIDEPULLREQUESTAPPROVALRULESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class OverridePullRequestApprovalRulesResponse;

class OverridePullRequestApprovalRulesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit OverridePullRequestApprovalRulesResponsePrivate(OverridePullRequestApprovalRulesResponse * const q);

    void parseOverridePullRequestApprovalRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OverridePullRequestApprovalRulesResponse)
    Q_DISABLE_COPY(OverridePullRequestApprovalRulesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
