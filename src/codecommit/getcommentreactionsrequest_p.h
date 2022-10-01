// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREACTIONSREQUEST_P_H
#define QTAWS_GETCOMMENTREACTIONSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getcommentreactionsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentReactionsRequest;

class GetCommentReactionsRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetCommentReactionsRequestPrivate(const CodeCommitRequest::Action action,
                                   GetCommentReactionsRequest * const q);
    GetCommentReactionsRequestPrivate(const GetCommentReactionsRequestPrivate &other,
                                   GetCommentReactionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommentReactionsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
