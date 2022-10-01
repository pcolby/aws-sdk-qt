// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEREPOSITORYDESCRIPTIONREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updaterepositorydescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryDescriptionRequest;

class UpdateRepositoryDescriptionRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateRepositoryDescriptionRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateRepositoryDescriptionRequest * const q);
    UpdateRepositoryDescriptionRequestPrivate(const UpdateRepositoryDescriptionRequestPrivate &other,
                                   UpdateRepositoryDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
