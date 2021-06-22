/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
