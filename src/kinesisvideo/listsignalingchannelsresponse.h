// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNALINGCHANNELSRESPONSE_H
#define QTAWS_LISTSIGNALINGCHANNELSRESPONSE_H

#include "kinesisvideoresponse.h"
#include "listsignalingchannelsrequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListSignalingChannelsResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT ListSignalingChannelsResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    ListSignalingChannelsResponse(const ListSignalingChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSignalingChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSignalingChannelsResponse)
    Q_DISABLE_COPY(ListSignalingChannelsResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
