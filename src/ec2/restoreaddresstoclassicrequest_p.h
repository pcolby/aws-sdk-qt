// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREADDRESSTOCLASSICREQUEST_P_H
#define QTAWS_RESTOREADDRESSTOCLASSICREQUEST_P_H

#include "ec2request_p.h"
#include "restoreaddresstoclassicrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreAddressToClassicRequest;

class RestoreAddressToClassicRequestPrivate : public Ec2RequestPrivate {

public:
    RestoreAddressToClassicRequestPrivate(const Ec2Request::Action action,
                                   RestoreAddressToClassicRequest * const q);
    RestoreAddressToClassicRequestPrivate(const RestoreAddressToClassicRequestPrivate &other,
                                   RestoreAddressToClassicRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreAddressToClassicRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
