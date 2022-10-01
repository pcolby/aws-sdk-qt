// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGCMCHANNELRESPONSE_H
#define QTAWS_DELETEGCMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deletegcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteGcmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteGcmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteGcmChannelResponse(const DeleteGcmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGcmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGcmChannelResponse)
    Q_DISABLE_COPY(DeleteGcmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
