// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPOLICYTABLERESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYPOLICYTABLERESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPolicyTableResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayPolicyTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayPolicyTableResponse(const DeleteTransitGatewayPolicyTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayPolicyTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayPolicyTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
