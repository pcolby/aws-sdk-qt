// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_H
#define QTAWS_DESCRIBECHANNELREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeChannelRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT DescribeChannelRequest : public MediaPackageRequest {

public:
    DescribeChannelRequest(const DescribeChannelRequest &other);
    DescribeChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
