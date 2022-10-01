// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESREQUEST_P_H
#define QTAWS_LISTREPOSITORIESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesRequest;

class ListRepositoriesRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListRepositoriesRequestPrivate(const CodeCommitRequest::Action action,
                                   ListRepositoriesRequest * const q);
    ListRepositoriesRequestPrivate(const ListRepositoriesRequestPrivate &other,
                                   ListRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
