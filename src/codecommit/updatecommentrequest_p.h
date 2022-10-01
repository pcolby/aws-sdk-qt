// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMMENTREQUEST_P_H
#define QTAWS_UPDATECOMMENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatecommentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateCommentRequest;

class UpdateCommentRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateCommentRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateCommentRequest * const q);
    UpdateCommentRequestPrivate(const UpdateCommentRequestPrivate &other,
                                   UpdateCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCommentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
