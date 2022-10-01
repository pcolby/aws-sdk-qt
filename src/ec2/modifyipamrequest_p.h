// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMREQUEST_P_H
#define QTAWS_MODIFYIPAMREQUEST_P_H

#include "ec2request_p.h"
#include "modifyipamrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamRequest;

class ModifyIpamRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyIpamRequestPrivate(const Ec2Request::Action action,
                                   ModifyIpamRequest * const q);
    ModifyIpamRequestPrivate(const ModifyIpamRequestPrivate &other,
                                   ModifyIpamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
