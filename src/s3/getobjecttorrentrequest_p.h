// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTORRENTREQUEST_P_H
#define QTAWS_GETOBJECTTORRENTREQUEST_P_H

#include "s3request_p.h"
#include "getobjecttorrentrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectTorrentRequest;

class GetObjectTorrentRequestPrivate : public S3RequestPrivate {

public:
    GetObjectTorrentRequestPrivate(const S3Request::Action action,
                                   GetObjectTorrentRequest * const q);
    GetObjectTorrentRequestPrivate(const GetObjectTorrentRequestPrivate &other,
                                   GetObjectTorrentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectTorrentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
