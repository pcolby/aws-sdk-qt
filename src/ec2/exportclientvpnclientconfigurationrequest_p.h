// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCLIENTVPNCLIENTCONFIGURATIONREQUEST_P_H
#define QTAWS_EXPORTCLIENTVPNCLIENTCONFIGURATIONREQUEST_P_H

#include "ec2request_p.h"
#include "exportclientvpnclientconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportClientVpnClientConfigurationRequest;

class ExportClientVpnClientConfigurationRequestPrivate : public Ec2RequestPrivate {

public:
    ExportClientVpnClientConfigurationRequestPrivate(const Ec2Request::Action action,
                                   ExportClientVpnClientConfigurationRequest * const q);
    ExportClientVpnClientConfigurationRequestPrivate(const ExportClientVpnClientConfigurationRequestPrivate &other,
                                   ExportClientVpnClientConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportClientVpnClientConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
