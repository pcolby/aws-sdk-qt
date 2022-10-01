// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPOLICYREQUEST_P_H
#define QTAWS_UNTAGPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "untagpolicyrequest.h"

namespace QtAws {
namespace Iam {

class UntagPolicyRequest;

class UntagPolicyRequestPrivate : public IamRequestPrivate {

public:
    UntagPolicyRequestPrivate(const IamRequest::Action action,
                                   UntagPolicyRequest * const q);
    UntagPolicyRequestPrivate(const UntagPolicyRequestPrivate &other,
                                   UntagPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
