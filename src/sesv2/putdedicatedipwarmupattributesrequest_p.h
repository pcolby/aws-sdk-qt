// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putdedicatedipwarmupattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpWarmupAttributesRequest;

class PutDedicatedIpWarmupAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutDedicatedIpWarmupAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutDedicatedIpWarmupAttributesRequest * const q);
    PutDedicatedIpWarmupAttributesRequestPrivate(const PutDedicatedIpWarmupAttributesRequestPrivate &other,
                                   PutDedicatedIpWarmupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpWarmupAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
