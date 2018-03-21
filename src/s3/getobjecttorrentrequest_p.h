/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETOBJECTTORRENTREQUEST_P_H
#define QTAWS_GETOBJECTTORRENTREQUEST_P_H

#include "s3_p.h"
#include "getobjecttorrentrequest.h"

namespace AWS {

namespace S3 {

class GetObjectTorrentRequest;

class QTAWS_EXPORT GetObjectTorrentRequestPrivate : public S3Private {

public:
    GetObjectTorrentRequestPrivate(const S3::Action action,
                                   GetObjectTorrentRequest * const q);
    GetObjectTorrentRequestPrivate(const GetObjectTorrentRequestPrivate &other,
                                   GetObjectTorrentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectTorrentRequest)

};

} // namespace S3
} // namespace AWS

#endif
