// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTTITLEREQUEST_P_H
#define QTAWS_UPDATEPULLREQUESTTITLEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatepullrequesttitlerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestTitleRequest;

class UpdatePullRequestTitleRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdatePullRequestTitleRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdatePullRequestTitleRequest * const q);
    UpdatePullRequestTitleRequestPrivate(const UpdatePullRequestTitleRequestPrivate &other,
                                   UpdatePullRequestTitleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestTitleRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
