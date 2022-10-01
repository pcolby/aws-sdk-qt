// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNROUTERESPONSE_H
#define QTAWS_CREATECLIENTVPNROUTERESPONSE_H

#include "ec2response.h"
#include "createclientvpnrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnRouteResponsePrivate;

class QTAWSEC2_EXPORT CreateClientVpnRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateClientVpnRouteResponse(const CreateClientVpnRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClientVpnRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClientVpnRouteResponse)
    Q_DISABLE_COPY(CreateClientVpnRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
