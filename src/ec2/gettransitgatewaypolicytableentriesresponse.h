// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewaypolicytableentriesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableEntriesResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPolicyTableEntriesResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayPolicyTableEntriesResponse(const GetTransitGatewayPolicyTableEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayPolicyTableEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPolicyTableEntriesResponse)
    Q_DISABLE_COPY(GetTransitGatewayPolicyTableEntriesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
