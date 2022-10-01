// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSREQUEST_P_H
#define QTAWS_LISTPARTSREQUEST_P_H

#include "s3request_p.h"
#include "listpartsrequest.h"

namespace QtAws {
namespace S3 {

class ListPartsRequest;

class ListPartsRequestPrivate : public S3RequestPrivate {

public:
    ListPartsRequestPrivate(const S3Request::Action action,
                                   ListPartsRequest * const q);
    ListPartsRequestPrivate(const ListPartsRequestPrivate &other,
                                   ListPartsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPartsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
