// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHGROUPPOLICYREQUEST_P_H
#define QTAWS_ATTACHGROUPPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "attachgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachGroupPolicyRequest;

class AttachGroupPolicyRequestPrivate : public IamRequestPrivate {

public:
    AttachGroupPolicyRequestPrivate(const IamRequest::Action action,
                                   AttachGroupPolicyRequest * const q);
    AttachGroupPolicyRequestPrivate(const AttachGroupPolicyRequestPrivate &other,
                                   AttachGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
