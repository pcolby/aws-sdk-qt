// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHROLEPOLICYREQUEST_P_H
#define QTAWS_ATTACHROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "attachrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachRolePolicyRequest;

class AttachRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    AttachRolePolicyRequestPrivate(const IamRequest::Action action,
                                   AttachRolePolicyRequest * const q);
    AttachRolePolicyRequestPrivate(const AttachRolePolicyRequestPrivate &other,
                                   AttachRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
