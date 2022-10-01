// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTREPLYREQUEST_P_H
#define QTAWS_POSTCOMMENTREPLYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "postcommentreplyrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentReplyRequest;

class PostCommentReplyRequestPrivate : public CodeCommitRequestPrivate {

public:
    PostCommentReplyRequestPrivate(const CodeCommitRequest::Action action,
                                   PostCommentReplyRequest * const q);
    PostCommentReplyRequestPrivate(const PostCommentReplyRequestPrivate &other,
                                   PostCommentReplyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostCommentReplyRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
