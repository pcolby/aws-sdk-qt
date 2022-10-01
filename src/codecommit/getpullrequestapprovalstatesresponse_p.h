// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTAPPROVALSTATESRESPONSE_P_H
#define QTAWS_GETPULLREQUESTAPPROVALSTATESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestApprovalStatesResponse;

class GetPullRequestApprovalStatesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetPullRequestApprovalStatesResponsePrivate(GetPullRequestApprovalStatesResponse * const q);

    void parseGetPullRequestApprovalStatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPullRequestApprovalStatesResponse)
    Q_DISABLE_COPY(GetPullRequestApprovalStatesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
