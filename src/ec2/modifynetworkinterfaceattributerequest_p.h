// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifynetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyNetworkInterfaceAttributeRequest;

class ModifyNetworkInterfaceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyNetworkInterfaceAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyNetworkInterfaceAttributeRequest * const q);
    ModifyNetworkInterfaceAttributeRequestPrivate(const ModifyNetworkInterfaceAttributeRequestPrivate &other,
                                   ModifyNetworkInterfaceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyNetworkInterfaceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
