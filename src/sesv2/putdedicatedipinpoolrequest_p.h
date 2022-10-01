// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLREQUEST_P_H
#define QTAWS_PUTDEDICATEDIPINPOOLREQUEST_P_H

#include "sesv2request_p.h"
#include "putdedicatedipinpoolrequest.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpInPoolRequest;

class PutDedicatedIpInPoolRequestPrivate : public SESv2RequestPrivate {

public:
    PutDedicatedIpInPoolRequestPrivate(const SESv2Request::Action action,
                                   PutDedicatedIpInPoolRequest * const q);
    PutDedicatedIpInPoolRequestPrivate(const PutDedicatedIpInPoolRequestPrivate &other,
                                   PutDedicatedIpInPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpInPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
