// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPrefixListReferenceResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayPrefixListReferenceResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayPrefixListReferenceResponse(const CreateTransitGatewayPrefixListReferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayPrefixListReferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPrefixListReferenceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
