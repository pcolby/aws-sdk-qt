// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALSTATERESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALSTATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalStateResponse;

class UpdatePullRequestApprovalStateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdatePullRequestApprovalStateResponsePrivate(UpdatePullRequestApprovalStateResponse * const q);

    void parseUpdatePullRequestApprovalStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestApprovalStateResponse)
    Q_DISABLE_COPY(UpdatePullRequestApprovalStateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
