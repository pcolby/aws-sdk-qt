// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICETYPESREQUEST_H
#define QTAWS_GETVPNCONNECTIONDEVICETYPESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceTypesRequestPrivate;

class QTAWSEC2_EXPORT GetVpnConnectionDeviceTypesRequest : public Ec2Request {

public:
    GetVpnConnectionDeviceTypesRequest(const GetVpnConnectionDeviceTypesRequest &other);
    GetVpnConnectionDeviceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpnConnectionDeviceTypesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
