// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPCHANNELRESPONSE_H
#define QTAWS_DELETEAPNSVOIPCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteApnsVoipChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteApnsVoipChannelResponse(const DeleteApnsVoipChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApnsVoipChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApnsVoipChannelResponse)
    Q_DISABLE_COPY(DeleteApnsVoipChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
