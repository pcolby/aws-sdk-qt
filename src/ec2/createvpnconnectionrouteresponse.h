// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONROUTERESPONSE_H
#define QTAWS_CREATEVPNCONNECTIONROUTERESPONSE_H

#include "ec2response.h"
#include "createvpnconnectionrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRouteResponsePrivate;

class QTAWSEC2_EXPORT CreateVpnConnectionRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpnConnectionRouteResponse(const CreateVpnConnectionRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpnConnectionRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnConnectionRouteResponse)
    Q_DISABLE_COPY(CreateVpnConnectionRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
