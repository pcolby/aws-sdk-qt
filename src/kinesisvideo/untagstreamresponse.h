// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSTREAMRESPONSE_H
#define QTAWS_UNTAGSTREAMRESPONSE_H

#include "kinesisvideoresponse.h"
#include "untagstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UntagStreamResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT UntagStreamResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    UntagStreamResponse(const UntagStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagStreamResponse)
    Q_DISABLE_COPY(UntagStreamResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
