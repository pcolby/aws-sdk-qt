// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWENTITLEMENTRESPONSE_H
#define QTAWS_UPDATEFLOWENTITLEMENTRESPONSE_H

#include "mediaconnectresponse.h"
#include "updateflowentitlementrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowEntitlementResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowEntitlementResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    UpdateFlowEntitlementResponse(const UpdateFlowEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowEntitlementResponse)
    Q_DISABLE_COPY(UpdateFlowEntitlementResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
