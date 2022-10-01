// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNALINGCHANNELRESPONSE_H
#define QTAWS_DESCRIBESIGNALINGCHANNELRESPONSE_H

#include "kinesisvideoresponse.h"
#include "describesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeSignalingChannelResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeSignalingChannelResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    DescribeSignalingChannelResponse(const DescribeSignalingChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSignalingChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSignalingChannelResponse)
    Q_DISABLE_COPY(DescribeSignalingChannelResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
