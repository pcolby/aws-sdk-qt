// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONREQUEST_H
#define QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceSampleConfigurationRequestPrivate;

class QTAWSEC2_EXPORT GetVpnConnectionDeviceSampleConfigurationRequest : public Ec2Request {

public:
    GetVpnConnectionDeviceSampleConfigurationRequest(const GetVpnConnectionDeviceSampleConfigurationRequest &other);
    GetVpnConnectionDeviceSampleConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpnConnectionDeviceSampleConfigurationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
