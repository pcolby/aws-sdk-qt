// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTREQUEST_P_H
#define QTAWS_DELETECOMMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletecommentrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCommentRequest;

class DeleteCommentRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteCommentRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteCommentRequest * const q);
    DeleteCommentRequestPrivate(const DeleteCommentRequestPrivate &other,
                                   DeleteCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCommentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
