// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESREQUEST_H
#define QTAWS_DESCRIBEIMAGESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeImagesRequestPrivate;

class QTAWSEC2_EXPORT DescribeImagesRequest : public Ec2Request {

public:
    DescribeImagesRequest(const DescribeImagesRequest &other);
    DescribeImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
