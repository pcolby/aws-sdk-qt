// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGGROUPREQUEST_H
#define QTAWS_DESCRIBEPACKAGINGGROUPREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingGroupRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DescribePackagingGroupRequest : public MediaPackageVodRequest {

public:
    DescribePackagingGroupRequest(const DescribePackagingGroupRequest &other);
    DescribePackagingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
