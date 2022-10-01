// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPOLICIESREQUEST_P_H
#define QTAWS_GETEFFECTIVEPOLICIESREQUEST_P_H

#include "iotrequest_p.h"
#include "geteffectivepoliciesrequest.h"

namespace QtAws {
namespace IoT {

class GetEffectivePoliciesRequest;

class GetEffectivePoliciesRequestPrivate : public IoTRequestPrivate {

public:
    GetEffectivePoliciesRequestPrivate(const IoTRequest::Action action,
                                   GetEffectivePoliciesRequest * const q);
    GetEffectivePoliciesRequestPrivate(const GetEffectivePoliciesRequestPrivate &other,
                                   GetEffectivePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEffectivePoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
