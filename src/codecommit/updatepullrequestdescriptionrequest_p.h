// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEPULLREQUESTDESCRIPTIONREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatepullrequestdescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestDescriptionRequest;

class UpdatePullRequestDescriptionRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdatePullRequestDescriptionRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdatePullRequestDescriptionRequest * const q);
    UpdatePullRequestDescriptionRequestPrivate(const UpdatePullRequestDescriptionRequestPrivate &other,
                                   UpdatePullRequestDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
