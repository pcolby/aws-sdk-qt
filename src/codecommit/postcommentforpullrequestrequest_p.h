// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORPULLREQUESTREQUEST_P_H
#define QTAWS_POSTCOMMENTFORPULLREQUESTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "postcommentforpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForPullRequestRequest;

class PostCommentForPullRequestRequestPrivate : public CodeCommitRequestPrivate {

public:
    PostCommentForPullRequestRequestPrivate(const CodeCommitRequest::Action action,
                                   PostCommentForPullRequestRequest * const q);
    PostCommentForPullRequestRequestPrivate(const PostCommentForPullRequestRequestPrivate &other,
                                   PostCommentForPullRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostCommentForPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
