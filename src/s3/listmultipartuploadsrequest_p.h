// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSREQUEST_P_H
#define QTAWS_LISTMULTIPARTUPLOADSREQUEST_P_H

#include "s3request_p.h"
#include "listmultipartuploadsrequest.h"

namespace QtAws {
namespace S3 {

class ListMultipartUploadsRequest;

class ListMultipartUploadsRequestPrivate : public S3RequestPrivate {

public:
    ListMultipartUploadsRequestPrivate(const S3Request::Action action,
                                   ListMultipartUploadsRequest * const q);
    ListMultipartUploadsRequestPrivate(const ListMultipartUploadsRequestPrivate &other,
                                   ListMultipartUploadsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultipartUploadsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
