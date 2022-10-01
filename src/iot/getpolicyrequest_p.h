// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYREQUEST_P_H
#define QTAWS_GETPOLICYREQUEST_P_H

#include "iotrequest_p.h"
#include "getpolicyrequest.h"

namespace QtAws {
namespace IoT {

class GetPolicyRequest;

class GetPolicyRequestPrivate : public IoTRequestPrivate {

public:
    GetPolicyRequestPrivate(const IoTRequest::Action action,
                                   GetPolicyRequest * const q);
    GetPolicyRequestPrivate(const GetPolicyRequestPrivate &other,
                                   GetPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
