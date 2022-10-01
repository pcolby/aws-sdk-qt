// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYTRIGGERSREQUEST_P_H
#define QTAWS_PUTREPOSITORYTRIGGERSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "putrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutRepositoryTriggersRequest;

class PutRepositoryTriggersRequestPrivate : public CodeCommitRequestPrivate {

public:
    PutRepositoryTriggersRequestPrivate(const CodeCommitRequest::Action action,
                                   PutRepositoryTriggersRequest * const q);
    PutRepositoryTriggersRequestPrivate(const PutRepositoryTriggersRequestPrivate &other,
                                   PutRepositoryTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
