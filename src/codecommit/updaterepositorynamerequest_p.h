// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYNAMEREQUEST_P_H
#define QTAWS_UPDATEREPOSITORYNAMEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updaterepositorynamerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryNameRequest;

class UpdateRepositoryNameRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateRepositoryNameRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateRepositoryNameRequest * const q);
    UpdateRepositoryNameRequestPrivate(const UpdateRepositoryNameRequestPrivate &other,
                                   UpdateRepositoryNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryNameRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
