// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPREQUEST_P_H
#define QTAWS_GETSTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpRequest;

class GetStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    GetStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   GetStaticIpRequest * const q);
    GetStaticIpRequestPrivate(const GetStaticIpRequestPrivate &other,
                                   GetStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
