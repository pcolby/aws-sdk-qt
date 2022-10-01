// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMMENTREACTIONREQUEST_P_H
#define QTAWS_PUTCOMMENTREACTIONREQUEST_P_H

#include "codecommitrequest_p.h"
#include "putcommentreactionrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutCommentReactionRequest;

class PutCommentReactionRequestPrivate : public CodeCommitRequestPrivate {

public:
    PutCommentReactionRequestPrivate(const CodeCommitRequest::Action action,
                                   PutCommentReactionRequest * const q);
    PutCommentReactionRequestPrivate(const PutCommentReactionRequestPrivate &other,
                                   PutCommentReactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutCommentReactionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
