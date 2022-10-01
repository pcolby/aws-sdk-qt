// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEPACKAGINGCONFIGURATIONREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingConfigurationRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DescribePackagingConfigurationRequest : public MediaPackageVodRequest {

public:
    DescribePackagingConfigurationRequest(const DescribePackagingConfigurationRequest &other);
    DescribePackagingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
