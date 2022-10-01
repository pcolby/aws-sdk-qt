// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONRESPONSE_H
#define QTAWS_GETVPNCONNECTIONDEVICESAMPLECONFIGURATIONRESPONSE_H

#include "ec2response.h"
#include "getvpnconnectiondevicesampleconfigurationrequest.h"

namespace QtAws {
namespace Ec2 {

class GetVpnConnectionDeviceSampleConfigurationResponsePrivate;

class QTAWSEC2_EXPORT GetVpnConnectionDeviceSampleConfigurationResponse : public Ec2Response {
    Q_OBJECT

public:
    GetVpnConnectionDeviceSampleConfigurationResponse(const GetVpnConnectionDeviceSampleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVpnConnectionDeviceSampleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVpnConnectionDeviceSampleConfigurationResponse)
    Q_DISABLE_COPY(GetVpnConnectionDeviceSampleConfigurationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
