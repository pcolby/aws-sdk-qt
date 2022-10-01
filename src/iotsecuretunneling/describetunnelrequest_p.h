// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETUNNELREQUEST_P_H
#define QTAWS_DESCRIBETUNNELREQUEST_P_H

#include "iotsecuretunnelingrequest_p.h"
#include "describetunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class DescribeTunnelRequest;

class DescribeTunnelRequestPrivate : public IoTSecureTunnelingRequestPrivate {

public:
    DescribeTunnelRequestPrivate(const IoTSecureTunnelingRequest::Action action,
                                   DescribeTunnelRequest * const q);
    DescribeTunnelRequestPrivate(const DescribeTunnelRequestPrivate &other,
                                   DescribeTunnelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTunnelRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
