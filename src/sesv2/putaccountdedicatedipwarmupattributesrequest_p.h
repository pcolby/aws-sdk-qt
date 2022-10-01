// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putaccountdedicatedipwarmupattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDedicatedIpWarmupAttributesRequest;

class PutAccountDedicatedIpWarmupAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutAccountDedicatedIpWarmupAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutAccountDedicatedIpWarmupAttributesRequest * const q);
    PutAccountDedicatedIpWarmupAttributesRequestPrivate(const PutAccountDedicatedIpWarmupAttributesRequestPrivate &other,
                                   PutAccountDedicatedIpWarmupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountDedicatedIpWarmupAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
