// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewayprefixlistreferencesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPrefixListReferencesResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPrefixListReferencesResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayPrefixListReferencesResponse(const GetTransitGatewayPrefixListReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayPrefixListReferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPrefixListReferencesResponse)
    Q_DISABLE_COPY(GetTransitGatewayPrefixListReferencesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
