// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYPOLICYREQUEST_P_H
#define QTAWS_GETREGISTRYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "getregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryPolicyRequest;

class GetRegistryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    GetRegistryPolicyRequestPrivate(const EcrRequest::Action action,
                                   GetRegistryPolicyRequest * const q);
    GetRegistryPolicyRequestPrivate(const GetRegistryPolicyRequestPrivate &other,
                                   GetRegistryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
