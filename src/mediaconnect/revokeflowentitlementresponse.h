// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEFLOWENTITLEMENTRESPONSE_H
#define QTAWS_REVOKEFLOWENTITLEMENTRESPONSE_H

#include "mediaconnectresponse.h"
#include "revokeflowentitlementrequest.h"

namespace QtAws {
namespace MediaConnect {

class RevokeFlowEntitlementResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT RevokeFlowEntitlementResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    RevokeFlowEntitlementResponse(const RevokeFlowEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeFlowEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeFlowEntitlementResponse)
    Q_DISABLE_COPY(RevokeFlowEntitlementResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
