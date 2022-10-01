// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECHANNELRESPONSE_H
#define QTAWS_DELETEVOICECHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deletevoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteVoiceChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteVoiceChannelResponse(const DeleteVoiceChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceChannelResponse)
    Q_DISABLE_COPY(DeleteVoiceChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
