// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTORRENTRESPONSE_H
#define QTAWS_GETOBJECTTORRENTRESPONSE_H

#include "s3response.h"
#include "getobjecttorrentrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectTorrentResponsePrivate;

class QTAWSS3_EXPORT GetObjectTorrentResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectTorrentResponse(const GetObjectTorrentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectTorrentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectTorrentResponse)
    Q_DISABLE_COPY(GetObjectTorrentResponse)

};

} // namespace S3
} // namespace QtAws

#endif
