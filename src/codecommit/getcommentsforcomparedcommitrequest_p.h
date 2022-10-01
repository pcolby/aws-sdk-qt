// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORCOMPAREDCOMMITREQUEST_P_H
#define QTAWS_GETCOMMENTSFORCOMPAREDCOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getcommentsforcomparedcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForComparedCommitRequest;

class GetCommentsForComparedCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetCommentsForComparedCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   GetCommentsForComparedCommitRequest * const q);
    GetCommentsForComparedCommitRequestPrivate(const GetCommentsForComparedCommitRequestPrivate &other,
                                   GetCommentsForComparedCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommentsForComparedCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
