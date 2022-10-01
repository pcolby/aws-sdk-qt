// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATESTATICIPREQUEST_P_H
#define QTAWS_ALLOCATESTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "allocatestaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class AllocateStaticIpRequest;

class AllocateStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    AllocateStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   AllocateStaticIpRequest * const q);
    AllocateStaticIpRequestPrivate(const AllocateStaticIpRequestPrivate &other,
                                   AllocateStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
