// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPREQUEST_P_H
#define QTAWS_GETDEDICATEDIPREQUEST_P_H

#include "sesv2request_p.h"
#include "getdedicatediprequest.h"

namespace QtAws {
namespace SESv2 {

class GetDedicatedIpRequest;

class GetDedicatedIpRequestPrivate : public SESv2RequestPrivate {

public:
    GetDedicatedIpRequestPrivate(const SESv2Request::Action action,
                                   GetDedicatedIpRequest * const q);
    GetDedicatedIpRequestPrivate(const GetDedicatedIpRequestPrivate &other,
                                   GetDedicatedIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
