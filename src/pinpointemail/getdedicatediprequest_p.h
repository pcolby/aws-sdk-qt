// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPREQUEST_P_H
#define QTAWS_GETDEDICATEDIPREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdedicatediprequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpRequest;

class GetDedicatedIpRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDedicatedIpRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDedicatedIpRequest * const q);
    GetDedicatedIpRequestPrivate(const GetDedicatedIpRequestPrivate &other,
                                   GetDedicatedIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
