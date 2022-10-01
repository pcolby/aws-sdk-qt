// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayResponse(const DeleteTransitGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
