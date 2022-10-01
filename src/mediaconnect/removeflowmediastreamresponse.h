// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWMEDIASTREAMRESPONSE_H
#define QTAWS_REMOVEFLOWMEDIASTREAMRESPONSE_H

#include "mediaconnectresponse.h"
#include "removeflowmediastreamrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowMediaStreamResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowMediaStreamResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    RemoveFlowMediaStreamResponse(const RemoveFlowMediaStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFlowMediaStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowMediaStreamResponse)
    Q_DISABLE_COPY(RemoveFlowMediaStreamResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
