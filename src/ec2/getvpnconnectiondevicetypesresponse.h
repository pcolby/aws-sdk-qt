// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICETYPESRESPONSE_H
#define QTAWS_GETVPNCONNECTIONDEVICETYPESRESPONSE_H

#include "ec2response.h"
#include "getvpnconnectiondevicetypesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceTypesResponsePrivate;

class QTAWSEC2_EXPORT GetVpnConnectionDeviceTypesResponse : public Ec2Response {
    Q_OBJECT

public:
    GetVpnConnectionDeviceTypesResponse(const GetVpnConnectionDeviceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVpnConnectionDeviceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpnConnectionDeviceTypesResponse)
    Q_DISABLE_COPY(GetVpnConnectionDeviceTypesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
