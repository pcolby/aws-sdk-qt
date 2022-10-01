// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORPULLREQUESTREQUEST_P_H
#define QTAWS_GETCOMMENTSFORPULLREQUESTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getcommentsforpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForPullRequestRequest;

class GetCommentsForPullRequestRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetCommentsForPullRequestRequestPrivate(const CodeCommitRequest::Action action,
                                   GetCommentsForPullRequestRequest * const q);
    GetCommentsForPullRequestRequestPrivate(const GetCommentsForPullRequestRequestPrivate &other,
                                   GetCommentsForPullRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommentsForPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
