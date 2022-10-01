// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETREQUEST_H
#define QTAWS_DESCRIBEASSETREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribeAssetRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DescribeAssetRequest : public MediaPackageVodRequest {

public:
    DescribeAssetRequest(const DescribeAssetRequest &other);
    DescribeAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssetRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
