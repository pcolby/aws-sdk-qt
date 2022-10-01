// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYREQUEST_P_H
#define QTAWS_GETREPOSITORYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "getrepositorypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class GetRepositoryPolicyRequest;

class GetRepositoryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    GetRepositoryPolicyRequestPrivate(const EcrRequest::Action action,
                                   GetRepositoryPolicyRequest * const q);
    GetRepositoryPolicyRequestPrivate(const GetRepositoryPolicyRequestPrivate &other,
                                   GetRepositoryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
