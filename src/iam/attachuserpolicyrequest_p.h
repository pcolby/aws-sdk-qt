// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHUSERPOLICYREQUEST_P_H
#define QTAWS_ATTACHUSERPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "attachuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class AttachUserPolicyRequest;

class AttachUserPolicyRequestPrivate : public IamRequestPrivate {

public:
    AttachUserPolicyRequestPrivate(const IamRequest::Action action,
                                   AttachUserPolicyRequest * const q);
    AttachUserPolicyRequestPrivate(const AttachUserPolicyRequestPrivate &other,
                                   AttachUserPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
