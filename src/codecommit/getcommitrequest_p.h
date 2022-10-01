// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMITREQUEST_P_H
#define QTAWS_GETCOMMITREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommitRequest;

class GetCommitRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetCommitRequestPrivate(const CodeCommitRequest::Action action,
                                   GetCommitRequest * const q);
    GetCommitRequestPrivate(const GetCommitRequestPrivate &other,
                                   GetCommitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
