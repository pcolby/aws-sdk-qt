// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGCMCHANNELRESPONSE_H
#define QTAWS_UPDATEGCMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updategcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateGcmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateGcmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateGcmChannelResponse(const UpdateGcmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGcmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGcmChannelResponse)
    Q_DISABLE_COPY(UpdateGcmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
