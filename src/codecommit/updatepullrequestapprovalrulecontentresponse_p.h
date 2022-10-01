// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTRESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALRULECONTENTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalRuleContentResponse;

class UpdatePullRequestApprovalRuleContentResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdatePullRequestApprovalRuleContentResponsePrivate(UpdatePullRequestApprovalRuleContentResponse * const q);

    void parseUpdatePullRequestApprovalRuleContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestApprovalRuleContentResponse)
    Q_DISABLE_COPY(UpdatePullRequestApprovalRuleContentResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
