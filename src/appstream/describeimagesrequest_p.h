// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEIMAGESREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeimagesrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImagesRequest;

class DescribeImagesRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeImagesRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeImagesRequest * const q);
    DescribeImagesRequestPrivate(const DescribeImagesRequestPrivate &other,
                                   DescribeImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImagesRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
