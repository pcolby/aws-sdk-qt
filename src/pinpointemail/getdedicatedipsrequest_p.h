// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSREQUEST_P_H
#define QTAWS_GETDEDICATEDIPSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdedicatedipsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpsRequest;

class GetDedicatedIpsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDedicatedIpsRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDedicatedIpsRequest * const q);
    GetDedicatedIpsRequestPrivate(const GetDedicatedIpsRequestPrivate &other,
                                   GetDedicatedIpsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
