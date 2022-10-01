// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPrefixListReferenceResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayPrefixListReferenceResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayPrefixListReferenceResponse(const DeleteTransitGatewayPrefixListReferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayPrefixListReferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayPrefixListReferenceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
