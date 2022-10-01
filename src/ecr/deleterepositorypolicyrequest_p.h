// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "deleterepositorypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRepositoryPolicyRequest;

class DeleteRepositoryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    DeleteRepositoryPolicyRequestPrivate(const EcrRequest::Action action,
                                   DeleteRepositoryPolicyRequest * const q);
    DeleteRepositoryPolicyRequestPrivate(const DeleteRepositoryPolicyRequestPrivate &other,
                                   DeleteRepositoryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
