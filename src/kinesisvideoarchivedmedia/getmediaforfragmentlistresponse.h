// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAFORFRAGMENTLISTRESPONSE_H
#define QTAWS_GETMEDIAFORFRAGMENTLISTRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "getmediaforfragmentlistrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetMediaForFragmentListResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetMediaForFragmentListResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    GetMediaForFragmentListResponse(const GetMediaForFragmentListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMediaForFragmentListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaForFragmentListResponse)
    Q_DISABLE_COPY(GetMediaForFragmentListResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
