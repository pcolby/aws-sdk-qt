// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deleterepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteRepositoryRequest;

class DeleteRepositoryRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteRepositoryRequestPrivate(const CodeCommitRequest::Action action,
                                   DeleteRepositoryRequest * const q);
    DeleteRepositoryRequestPrivate(const DeleteRepositoryRequestPrivate &other,
                                   DeleteRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
