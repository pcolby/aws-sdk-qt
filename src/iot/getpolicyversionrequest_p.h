// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYVERSIONREQUEST_P_H
#define QTAWS_GETPOLICYVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "getpolicyversionrequest.h"

namespace QtAws {
namespace IoT {

class GetPolicyVersionRequest;

class GetPolicyVersionRequestPrivate : public IoTRequestPrivate {

public:
    GetPolicyVersionRequestPrivate(const IoTRequest::Action action,
                                   GetPolicyVersionRequest * const q);
    GetPolicyVersionRequestPrivate(const GetPolicyVersionRequestPrivate &other,
                                   GetPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
