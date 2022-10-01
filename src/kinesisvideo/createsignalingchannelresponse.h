// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIGNALINGCHANNELRESPONSE_H
#define QTAWS_CREATESIGNALINGCHANNELRESPONSE_H

#include "kinesisvideoresponse.h"
#include "createsignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class CreateSignalingChannelResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT CreateSignalingChannelResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    CreateSignalingChannelResponse(const CreateSignalingChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSignalingChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSignalingChannelResponse)
    Q_DISABLE_COPY(CreateSignalingChannelResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
