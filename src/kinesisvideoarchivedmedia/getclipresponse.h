// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIPRESPONSE_H
#define QTAWS_GETCLIPRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "getcliprequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetClipResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetClipResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    GetClipResponse(const GetClipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClipResponse)
    Q_DISABLE_COPY(GetClipResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
