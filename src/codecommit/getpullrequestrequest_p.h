// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTREQUEST_P_H
#define QTAWS_GETPULLREQUESTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestRequest;

class GetPullRequestRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetPullRequestRequestPrivate(const CodeCommitRequest::Action action,
                                   GetPullRequestRequest * const q);
    GetPullRequestRequestPrivate(const GetPullRequestRequestPrivate &other,
                                   GetPullRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
