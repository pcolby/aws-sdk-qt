// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPOLICYREQUEST_P_H
#define QTAWS_DETACHPOLICYREQUEST_P_H

#include "organizationsrequest_p.h"
#include "detachpolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DetachPolicyRequest;

class DetachPolicyRequestPrivate : public OrganizationsRequestPrivate {

public:
    DetachPolicyRequestPrivate(const OrganizationsRequest::Action action,
                                   DetachPolicyRequest * const q);
    DetachPolicyRequestPrivate(const DetachPolicyRequestPrivate &other,
                                   DetachPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachPolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
