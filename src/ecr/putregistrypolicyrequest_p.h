// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYPOLICYREQUEST_P_H
#define QTAWS_PUTREGISTRYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "putregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryPolicyRequest;

class PutRegistryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    PutRegistryPolicyRequestPrivate(const EcrRequest::Action action,
                                   PutRegistryPolicyRequest * const q);
    PutRegistryPolicyRequestPrivate(const PutRegistryPolicyRequestPrivate &other,
                                   PutRegistryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
