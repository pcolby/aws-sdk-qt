// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNALINGCHANNELENDPOINTRESPONSE_H
#define QTAWS_GETSIGNALINGCHANNELENDPOINTRESPONSE_H

#include "kinesisvideoresponse.h"
#include "getsignalingchannelendpointrequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetSignalingChannelEndpointResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT GetSignalingChannelEndpointResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    GetSignalingChannelEndpointResponse(const GetSignalingChannelEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSignalingChannelEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSignalingChannelEndpointResponse)
    Q_DISABLE_COPY(GetSignalingChannelEndpointResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
