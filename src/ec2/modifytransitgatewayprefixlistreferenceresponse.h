// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H
#define QTAWS_MODIFYTRANSITGATEWAYPREFIXLISTREFERENCERESPONSE_H

#include "ec2response.h"
#include "modifytransitgatewayprefixlistreferencerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayPrefixListReferenceResponsePrivate;

class QTAWSEC2_EXPORT ModifyTransitGatewayPrefixListReferenceResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTransitGatewayPrefixListReferenceResponse(const ModifyTransitGatewayPrefixListReferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTransitGatewayPrefixListReferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTransitGatewayPrefixListReferenceResponse)
    Q_DISABLE_COPY(ModifyTransitGatewayPrefixListReferenceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
