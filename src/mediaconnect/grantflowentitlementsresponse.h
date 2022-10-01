// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTFLOWENTITLEMENTSRESPONSE_H
#define QTAWS_GRANTFLOWENTITLEMENTSRESPONSE_H

#include "mediaconnectresponse.h"
#include "grantflowentitlementsrequest.h"

namespace QtAws {
namespace MediaConnect {

class GrantFlowEntitlementsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT GrantFlowEntitlementsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    GrantFlowEntitlementsResponse(const GrantFlowEntitlementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GrantFlowEntitlementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantFlowEntitlementsResponse)
    Q_DISABLE_COPY(GrantFlowEntitlementsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
