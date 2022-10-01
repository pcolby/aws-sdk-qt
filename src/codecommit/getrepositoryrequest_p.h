// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYREQUEST_P_H
#define QTAWS_GETREPOSITORYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryRequest;

class GetRepositoryRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetRepositoryRequestPrivate(const CodeCommitRequest::Action action,
                                   GetRepositoryRequest * const q);
    GetRepositoryRequestPrivate(const GetRepositoryRequestPrivate &other,
                                   GetRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
