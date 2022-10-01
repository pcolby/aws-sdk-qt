// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDHEARTBEATRESPONSE_H
#define QTAWS_SENDHEARTBEATRESPONSE_H

#include "sagemakeredgeresponse.h"
#include "sendheartbeatrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class SendHeartbeatResponsePrivate;

class QTAWSSAGEMAKEREDGE_EXPORT SendHeartbeatResponse : public SagemakerEdgeResponse {
    Q_OBJECT

public:
    SendHeartbeatResponse(const SendHeartbeatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendHeartbeatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendHeartbeatResponse)
    Q_DISABLE_COPY(SendHeartbeatResponse)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
