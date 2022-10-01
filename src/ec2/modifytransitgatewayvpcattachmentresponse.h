// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTRESPONSE_H
#define QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "modifytransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayVpcAttachmentResponsePrivate;

class QTAWSEC2_EXPORT ModifyTransitGatewayVpcAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTransitGatewayVpcAttachmentResponse(const ModifyTransitGatewayVpcAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTransitGatewayVpcAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayVpcAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
