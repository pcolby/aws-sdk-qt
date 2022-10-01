// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMRESPONSE_H
#define QTAWS_LISTTAGSFORSTREAMRESPONSE_H

#include "kinesisvideoresponse.h"
#include "listtagsforstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListTagsForStreamResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT ListTagsForStreamResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    ListTagsForStreamResponse(const ListTagsForStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForStreamResponse)
    Q_DISABLE_COPY(ListTagsForStreamResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
