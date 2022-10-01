// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPSREQUEST_P_H
#define QTAWS_GETSTATICIPSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getstaticipsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpsRequest;

class GetStaticIpsRequestPrivate : public LightsailRequestPrivate {

public:
    GetStaticIpsRequestPrivate(const LightsailRequest::Action action,
                                   GetStaticIpsRequest * const q);
    GetStaticIpsRequestPrivate(const GetStaticIpsRequestPrivate &other,
                                   GetStaticIpsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStaticIpsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
