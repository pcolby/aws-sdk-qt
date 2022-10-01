// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_PUTLIFECYCLEPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "putlifecyclepolicyrequest.h"

namespace QtAws {
namespace Ecr {

class PutLifecyclePolicyRequest;

class PutLifecyclePolicyRequestPrivate : public EcrRequestPrivate {

public:
    PutLifecyclePolicyRequestPrivate(const EcrRequest::Action action,
                                   PutLifecyclePolicyRequest * const q);
    PutLifecyclePolicyRequestPrivate(const PutLifecyclePolicyRequestPrivate &other,
                                   PutLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLifecyclePolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
