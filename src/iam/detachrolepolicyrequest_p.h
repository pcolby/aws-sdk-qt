// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHROLEPOLICYREQUEST_P_H
#define QTAWS_DETACHROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "detachrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachRolePolicyRequest;

class DetachRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    DetachRolePolicyRequestPrivate(const IamRequest::Action action,
                                   DetachRolePolicyRequest * const q);
    DetachRolePolicyRequestPrivate(const DetachRolePolicyRequestPrivate &other,
                                   DetachRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
