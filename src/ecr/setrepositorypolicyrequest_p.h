// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYREQUEST_P_H
#define QTAWS_SETREPOSITORYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "setrepositorypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class SetRepositoryPolicyRequest;

class SetRepositoryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    SetRepositoryPolicyRequestPrivate(const EcrRequest::Action action,
                                   SetRepositoryPolicyRequest * const q);
    SetRepositoryPolicyRequestPrivate(const SetRepositoryPolicyRequestPrivate &other,
                                   SetRepositoryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetRepositoryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
