// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEADDRESSREQUEST_P_H
#define QTAWS_RELEASEADDRESSREQUEST_P_H

#include "ec2request_p.h"
#include "releaseaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseAddressRequest;

class ReleaseAddressRequestPrivate : public Ec2RequestPrivate {

public:
    ReleaseAddressRequestPrivate(const Ec2Request::Action action,
                                   ReleaseAddressRequest * const q);
    ReleaseAddressRequestPrivate(const ReleaseAddressRequestPrivate &other,
                                   ReleaseAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
