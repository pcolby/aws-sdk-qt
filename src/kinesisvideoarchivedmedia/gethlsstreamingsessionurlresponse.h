// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHLSSTREAMINGSESSIONURLRESPONSE_H
#define QTAWS_GETHLSSTREAMINGSESSIONURLRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "gethlsstreamingsessionurlrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetHLSStreamingSessionURLResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetHLSStreamingSessionURLResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    GetHLSStreamingSessionURLResponse(const GetHLSStreamingSessionURLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHLSStreamingSessionURLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHLSStreamingSessionURLResponse)
    Q_DISABLE_COPY(GetHLSStreamingSessionURLResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
