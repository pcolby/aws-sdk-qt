// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLREQUEST_P_H
#define QTAWS_PUTDEDICATEDIPINPOOLREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putdedicatedipinpoolrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDedicatedIpInPoolRequest;

class PutDedicatedIpInPoolRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutDedicatedIpInPoolRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutDedicatedIpInPoolRequest * const q);
    PutDedicatedIpInPoolRequestPrivate(const PutDedicatedIpInPoolRequestPrivate &other,
                                   PutDedicatedIpInPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpInPoolRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
