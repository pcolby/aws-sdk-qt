// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHUSERPOLICYREQUEST_P_H
#define QTAWS_DETACHUSERPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "detachuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DetachUserPolicyRequest;

class DetachUserPolicyRequestPrivate : public IamRequestPrivate {

public:
    DetachUserPolicyRequestPrivate(const IamRequest::Action action,
                                   DetachUserPolicyRequest * const q);
    DetachUserPolicyRequestPrivate(const DetachUserPolicyRequestPrivate &other,
                                   DetachUserPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
