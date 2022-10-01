// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIARESPONSE_H
#define QTAWS_GETMEDIARESPONSE_H

#include "kinesisvideomediaresponse.h"
#include "getmediarequest.h"

namespace QtAws {
namespace KinesisVideoMedia {

class GetMediaResponsePrivate;

class QTAWSKINESISVIDEOMEDIA_EXPORT GetMediaResponse : public KinesisVideoMediaResponse {
    Q_OBJECT

public:
    GetMediaResponse(const GetMediaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMediaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaResponse)
    Q_DISABLE_COPY(GetMediaResponse)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
