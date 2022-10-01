// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_P_H
#define QTAWS_DESCRIBECHANNELREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "describechannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeChannelRequest;

class DescribeChannelRequestPrivate : public MediaPackageRequestPrivate {

public:
    DescribeChannelRequestPrivate(const MediaPackageRequest::Action action,
                                   DescribeChannelRequest * const q);
    DescribeChannelRequestPrivate(const DescribeChannelRequestPrivate &other,
                                   DescribeChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
