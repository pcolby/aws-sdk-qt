// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNALINGCHANNELRESPONSE_H
#define QTAWS_DELETESIGNALINGCHANNELRESPONSE_H

#include "kinesisvideoresponse.h"
#include "deletesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteSignalingChannelResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT DeleteSignalingChannelResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    DeleteSignalingChannelResponse(const DeleteSignalingChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSignalingChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSignalingChannelResponse)
    Q_DISABLE_COPY(DeleteSignalingChannelResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
