// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putaccountdedicatedipwarmupattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountDedicatedIpWarmupAttributesRequest;

class PutAccountDedicatedIpWarmupAttributesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutAccountDedicatedIpWarmupAttributesRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutAccountDedicatedIpWarmupAttributesRequest * const q);
    PutAccountDedicatedIpWarmupAttributesRequestPrivate(const PutAccountDedicatedIpWarmupAttributesRequestPrivate &other,
                                   PutAccountDedicatedIpWarmupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountDedicatedIpWarmupAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
