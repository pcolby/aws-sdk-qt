// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALSTATEREQUEST_P_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALSTATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatepullrequestapprovalstaterequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalStateRequest;

class UpdatePullRequestApprovalStateRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdatePullRequestApprovalStateRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdatePullRequestApprovalStateRequest * const q);
    UpdatePullRequestApprovalStateRequestPrivate(const UpdatePullRequestApprovalStateRequestPrivate &other,
                                   UpdatePullRequestApprovalStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestApprovalStateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
