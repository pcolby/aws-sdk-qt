// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYRESPONSE_H
#define QTAWS_MODIFYTRANSITGATEWAYRESPONSE_H

#include "ec2response.h"
#include "modifytransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayResponsePrivate;

class QTAWSEC2_EXPORT ModifyTransitGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTransitGatewayResponse(const ModifyTransitGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTransitGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTransitGatewayResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
