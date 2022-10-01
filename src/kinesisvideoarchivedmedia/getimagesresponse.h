// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGESRESPONSE_H
#define QTAWS_GETIMAGESRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "getimagesrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetImagesResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetImagesResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    GetImagesResponse(const GetImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImagesResponse)
    Q_DISABLE_COPY(GetImagesResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
