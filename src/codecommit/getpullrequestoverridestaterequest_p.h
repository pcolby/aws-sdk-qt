// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTOVERRIDESTATEREQUEST_P_H
#define QTAWS_GETPULLREQUESTOVERRIDESTATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getpullrequestoverridestaterequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestOverrideStateRequest;

class GetPullRequestOverrideStateRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetPullRequestOverrideStateRequestPrivate(const CodeCommitRequest::Action action,
                                   GetPullRequestOverrideStateRequest * const q);
    GetPullRequestOverrideStateRequestPrivate(const GetPullRequestOverrideStateRequestPrivate &other,
                                   GetPullRequestOverrideStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPullRequestOverrideStateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
