// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONROUTERESPONSE_H
#define QTAWS_DELETEVPNCONNECTIONROUTERESPONSE_H

#include "ec2response.h"
#include "deletevpnconnectionrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionRouteResponsePrivate;

class QTAWSEC2_EXPORT DeleteVpnConnectionRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteVpnConnectionRouteResponse(const DeleteVpnConnectionRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpnConnectionRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpnConnectionRouteResponse)
    Q_DISABLE_COPY(DeleteVpnConnectionRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
