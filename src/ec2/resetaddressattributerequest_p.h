// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETADDRESSATTRIBUTEREQUEST_P_H
#define QTAWS_RESETADDRESSATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "resetaddressattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetAddressAttributeRequest;

class ResetAddressAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ResetAddressAttributeRequestPrivate(const Ec2Request::Action action,
                                   ResetAddressAttributeRequest * const q);
    ResetAddressAttributeRequestPrivate(const ResetAddressAttributeRequestPrivate &other,
                                   ResetAddressAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetAddressAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
