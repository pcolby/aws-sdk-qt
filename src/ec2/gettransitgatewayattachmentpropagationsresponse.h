// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewayattachmentpropagationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayAttachmentPropagationsResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayAttachmentPropagationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayAttachmentPropagationsResponse(const GetTransitGatewayAttachmentPropagationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayAttachmentPropagationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayAttachmentPropagationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayAttachmentPropagationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
