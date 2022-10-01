// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPRINCIPALPOLICYREQUEST_P_H
#define QTAWS_ATTACHPRINCIPALPOLICYREQUEST_P_H

#include "iotrequest_p.h"
#include "attachprincipalpolicyrequest.h"

namespace QtAws {
namespace IoT {

class AttachPrincipalPolicyRequest;

class AttachPrincipalPolicyRequestPrivate : public IoTRequestPrivate {

public:
    AttachPrincipalPolicyRequestPrivate(const IoTRequest::Action action,
                                   AttachPrincipalPolicyRequest * const q);
    AttachPrincipalPolicyRequestPrivate(const AttachPrincipalPolicyRequestPrivate &other,
                                   AttachPrincipalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachPrincipalPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
