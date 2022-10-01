// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWMEDIASTREAMRESPONSE_H
#define QTAWS_UPDATEFLOWMEDIASTREAMRESPONSE_H

#include "mediaconnectresponse.h"
#include "updateflowmediastreamrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowMediaStreamResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowMediaStreamResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    UpdateFlowMediaStreamResponse(const UpdateFlowMediaStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowMediaStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowMediaStreamResponse)
    Q_DISABLE_COPY(UpdateFlowMediaStreamResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
