// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYREQUEST_P_H
#define QTAWS_SETREPOSITORYPOLICYREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "setrepositorypolicyrequest.h"

namespace QtAws {
namespace EcrPublic {

class SetRepositoryPolicyRequest;

class SetRepositoryPolicyRequestPrivate : public EcrPublicRequestPrivate {

public:
    SetRepositoryPolicyRequestPrivate(const EcrPublicRequest::Action action,
                                   SetRepositoryPolicyRequest * const q);
    SetRepositoryPolicyRequestPrivate(const SetRepositoryPolicyRequestPrivate &other,
                                   SetRepositoryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetRepositoryPolicyRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
