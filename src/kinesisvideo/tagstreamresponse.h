// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSTREAMRESPONSE_H
#define QTAWS_TAGSTREAMRESPONSE_H

#include "kinesisvideoresponse.h"
#include "tagstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class TagStreamResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT TagStreamResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    TagStreamResponse(const TagStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagStreamResponse)
    Q_DISABLE_COPY(TagStreamResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
