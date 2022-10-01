// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSV2REQUEST_P_H
#define QTAWS_LISTOBJECTSV2REQUEST_P_H

#include "s3request_p.h"
#include "listobjectsv2request.h"

namespace QtAws {
namespace S3 {

class ListObjectsV2Request;

class ListObjectsV2RequestPrivate : public S3RequestPrivate {

public:
    ListObjectsV2RequestPrivate(const S3Request::Action action,
                                   ListObjectsV2Request * const q);
    ListObjectsV2RequestPrivate(const ListObjectsV2RequestPrivate &other,
                                   ListObjectsV2Request * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectsV2Request)

};

} // namespace S3
} // namespace QtAws

#endif
