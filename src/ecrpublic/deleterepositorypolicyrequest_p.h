// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYPOLICYREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "deleterepositorypolicyrequest.h"

namespace QtAws {
namespace EcrPublic {

class DeleteRepositoryPolicyRequest;

class DeleteRepositoryPolicyRequestPrivate : public EcrPublicRequestPrivate {

public:
    DeleteRepositoryPolicyRequestPrivate(const EcrPublicRequest::Action action,
                                   DeleteRepositoryPolicyRequest * const q);
    DeleteRepositoryPolicyRequestPrivate(const DeleteRepositoryPolicyRequestPrivate &other,
                                   DeleteRepositoryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryPolicyRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
