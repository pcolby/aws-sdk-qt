// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYREQUEST_P_H
#define QTAWS_ATTACHPOLICYREQUEST_P_H

#include "iotrequest_p.h"
#include "attachpolicyrequest.h"

namespace QtAws {
namespace IoT {

class AttachPolicyRequest;

class AttachPolicyRequestPrivate : public IoTRequestPrivate {

public:
    AttachPolicyRequestPrivate(const IoTRequest::Action action,
                                   AttachPolicyRequest * const q);
    AttachPolicyRequestPrivate(const AttachPolicyRequestPrivate &other,
                                   AttachPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
