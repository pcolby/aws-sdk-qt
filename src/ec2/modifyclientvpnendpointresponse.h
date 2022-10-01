// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTVPNENDPOINTRESPONSE_H
#define QTAWS_MODIFYCLIENTVPNENDPOINTRESPONSE_H

#include "ec2response.h"
#include "modifyclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyClientVpnEndpointResponsePrivate;

class QTAWSEC2_EXPORT ModifyClientVpnEndpointResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyClientVpnEndpointResponse(const ModifyClientVpnEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClientVpnEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClientVpnEndpointResponse)
    Q_DISABLE_COPY(ModifyClientVpnEndpointResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
