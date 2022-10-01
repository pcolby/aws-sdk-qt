// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTCONTENTREQUEST_P_H
#define QTAWS_DELETECOMMENTCONTENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deletecommentcontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteCommentContentRequest;

class DeleteCommentContentRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteCommentContentRequestPrivate(const CodeCommitRequest::Action action,
                                   DeleteCommentContentRequest * const q);
    DeleteCommentContentRequestPrivate(const DeleteCommentContentRequestPrivate &other,
                                   DeleteCommentContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCommentContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
