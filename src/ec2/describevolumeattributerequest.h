// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMEATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBEVOLUMEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeVolumeAttributeRequest : public Ec2Request {

public:
    DescribeVolumeAttributeRequest(const DescribeVolumeAttributeRequest &other);
    DescribeVolumeAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumeAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
