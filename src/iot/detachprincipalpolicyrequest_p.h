// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPRINCIPALPOLICYREQUEST_P_H
#define QTAWS_DETACHPRINCIPALPOLICYREQUEST_P_H

#include "iotrequest_p.h"
#include "detachprincipalpolicyrequest.h"

namespace QtAws {
namespace IoT {

class DetachPrincipalPolicyRequest;

class DetachPrincipalPolicyRequestPrivate : public IoTRequestPrivate {

public:
    DetachPrincipalPolicyRequestPrivate(const IoTRequest::Action action,
                                   DetachPrincipalPolicyRequest * const q);
    DetachPrincipalPolicyRequestPrivate(const DetachPrincipalPolicyRequestPrivate &other,
                                   DetachPrincipalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachPrincipalPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
