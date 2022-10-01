// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNALINGCHANNELRESPONSE_H
#define QTAWS_UPDATESIGNALINGCHANNELRESPONSE_H

#include "kinesisvideoresponse.h"
#include "updatesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateSignalingChannelResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateSignalingChannelResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    UpdateSignalingChannelResponse(const UpdateSignalingChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSignalingChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSignalingChannelResponse)
    Q_DISABLE_COPY(UpdateSignalingChannelResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
