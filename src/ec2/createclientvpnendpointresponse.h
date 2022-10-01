// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNENDPOINTRESPONSE_H
#define QTAWS_CREATECLIENTVPNENDPOINTRESPONSE_H

#include "ec2response.h"
#include "createclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnEndpointResponsePrivate;

class QTAWSEC2_EXPORT CreateClientVpnEndpointResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateClientVpnEndpointResponse(const CreateClientVpnEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClientVpnEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClientVpnEndpointResponse)
    Q_DISABLE_COPY(CreateClientVpnEndpointResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
