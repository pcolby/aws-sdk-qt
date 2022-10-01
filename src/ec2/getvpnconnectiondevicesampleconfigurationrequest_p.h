// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONREQUEST_P_H
#define QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONREQUEST_P_H

#include "ec2request_p.h"
#include "getvpnconnectiondevicesampleconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceSampleConfigurationRequest;

class GetVpnConnectionDeviceSampleConfigurationRequestPrivate : public Ec2RequestPrivate {

public:
    GetVpnConnectionDeviceSampleConfigurationRequestPrivate(const Ec2Request::Action action,
                                   GetVpnConnectionDeviceSampleConfigurationRequest * const q);
    GetVpnConnectionDeviceSampleConfigurationRequestPrivate(const GetVpnConnectionDeviceSampleConfigurationRequestPrivate &other,
                                   GetVpnConnectionDeviceSampleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVpnConnectionDeviceSampleConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
