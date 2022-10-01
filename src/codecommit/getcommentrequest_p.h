// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREQUEST_P_H
#define QTAWS_GETCOMMENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getcommentrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentRequest;

class GetCommentRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetCommentRequestPrivate(const CodeCommitRequest::Action action,
                                   GetCommentRequest * const q);
    GetCommentRequestPrivate(const GetCommentRequestPrivate &other,
                                   GetCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
