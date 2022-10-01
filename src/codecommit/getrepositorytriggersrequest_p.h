// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYTRIGGERSREQUEST_P_H
#define QTAWS_GETREPOSITORYTRIGGERSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryTriggersRequest;

class GetRepositoryTriggersRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetRepositoryTriggersRequestPrivate(const CodeCommitRequest::Action action,
                                   GetRepositoryTriggersRequest * const q);
    GetRepositoryTriggersRequestPrivate(const GetRepositoryTriggersRequestPrivate &other,
                                   GetRepositoryTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
