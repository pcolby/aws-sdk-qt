// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRREQUEST_P_H
#define QTAWS_PROVISIONBYOIPCIDRREQUEST_P_H

#include "ec2request_p.h"
#include "provisionbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionByoipCidrRequest;

class ProvisionByoipCidrRequestPrivate : public Ec2RequestPrivate {

public:
    ProvisionByoipCidrRequestPrivate(const Ec2Request::Action action,
                                   ProvisionByoipCidrRequest * const q);
    ProvisionByoipCidrRequestPrivate(const ProvisionByoipCidrRequestPrivate &other,
                                   ProvisionByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
