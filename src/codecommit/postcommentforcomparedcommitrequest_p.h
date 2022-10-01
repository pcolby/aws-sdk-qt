// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORCOMPAREDCOMMITREQUEST_P_H
#define QTAWS_POSTCOMMENTFORCOMPAREDCOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "postcommentforcomparedcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForComparedCommitRequest;

class PostCommentForComparedCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    PostCommentForComparedCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   PostCommentForComparedCommitRequest * const q);
    PostCommentForComparedCommitRequestPrivate(const PostCommentForComparedCommitRequestPrivate &other,
                                   PostCommentForComparedCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostCommentForComparedCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
