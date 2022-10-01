// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHGROUPPOLICYREQUEST_P_H
#define QTAWS_DETACHGROUPPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "detachgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachGroupPolicyRequest;

class DetachGroupPolicyRequestPrivate : public IamRequestPrivate {

public:
    DetachGroupPolicyRequestPrivate(const IamRequest::Action action,
                                   DetachGroupPolicyRequest * const q);
    DetachGroupPolicyRequestPrivate(const DetachGroupPolicyRequestPrivate &other,
                                   DetachGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
