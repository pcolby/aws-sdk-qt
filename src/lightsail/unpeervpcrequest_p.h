// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNPEERVPCREQUEST_P_H
#define QTAWS_UNPEERVPCREQUEST_P_H

#include "lightsailrequest_p.h"
#include "unpeervpcrequest.h"

namespace QtAws {
namespace Lightsail {

class UnpeerVpcRequest;

class UnpeerVpcRequestPrivate : public LightsailRequestPrivate {

public:
    UnpeerVpcRequestPrivate(const LightsailRequest::Action action,
                                   UnpeerVpcRequest * const q);
    UnpeerVpcRequestPrivate(const UnpeerVpcRequestPrivate &other,
                                   UnpeerVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnpeerVpcRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
