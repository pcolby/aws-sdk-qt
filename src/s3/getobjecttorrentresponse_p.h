// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTORRENTRESPONSE_P_H
#define QTAWS_GETOBJECTTORRENTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectTorrentResponse;

class GetObjectTorrentResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectTorrentResponsePrivate(GetObjectTorrentResponse * const q);

    void parseGetObjectTorrentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectTorrentResponse)
    Q_DISABLE_COPY(GetObjectTorrentResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
