// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESREQUEST_P_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESREQUEST_P_H

#include "ec2request_p.h"
#include "modifytrafficmirrorfilternetworkservicesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterNetworkServicesRequest;

class ModifyTrafficMirrorFilterNetworkServicesRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTrafficMirrorFilterNetworkServicesRequestPrivate(const Ec2Request::Action action,
                                   ModifyTrafficMirrorFilterNetworkServicesRequest * const q);
    ModifyTrafficMirrorFilterNetworkServicesRequestPrivate(const ModifyTrafficMirrorFilterNetworkServicesRequestPrivate &other,
                                   ModifyTrafficMirrorFilterNetworkServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorFilterNetworkServicesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
