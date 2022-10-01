// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PEERVPCREQUEST_P_H
#define QTAWS_PEERVPCREQUEST_P_H

#include "lightsailrequest_p.h"
#include "peervpcrequest.h"

namespace QtAws {
namespace Lightsail {

class PeerVpcRequest;

class PeerVpcRequestPrivate : public LightsailRequestPrivate {

public:
    PeerVpcRequestPrivate(const LightsailRequest::Action action,
                                   PeerVpcRequest * const q);
    PeerVpcRequestPrivate(const PeerVpcRequestPrivate &other,
                                   PeerVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(PeerVpcRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
