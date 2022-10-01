// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEPERMISSIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImagePermissionsRequest;

class DescribeImagePermissionsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeImagePermissionsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeImagePermissionsRequest * const q);
    DescribeImagePermissionsRequestPrivate(const DescribeImagePermissionsRequestPrivate &other,
                                   DescribeImagePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
