// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETREQUEST_P_H
#define QTAWS_DESCRIBEASSETREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "describeassetrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribeAssetRequest;

class DescribeAssetRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    DescribeAssetRequestPrivate(const MediaPackageVodRequest::Action action,
                                   DescribeAssetRequest * const q);
    DescribeAssetRequestPrivate(const DescribeAssetRequestPrivate &other,
                                   DescribeAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssetRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
