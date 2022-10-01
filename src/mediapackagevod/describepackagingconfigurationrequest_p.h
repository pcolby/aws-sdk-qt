// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGINGCONFIGURATIONREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "describepackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingConfigurationRequest;

class DescribePackagingConfigurationRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    DescribePackagingConfigurationRequestPrivate(const MediaPackageVodRequest::Action action,
                                   DescribePackagingConfigurationRequest * const q);
    DescribePackagingConfigurationRequestPrivate(const DescribePackagingConfigurationRequestPrivate &other,
                                   DescribePackagingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
