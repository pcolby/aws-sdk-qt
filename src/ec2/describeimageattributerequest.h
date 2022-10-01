// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEATTRIBUTEREQUEST_H
#define QTAWS_DESCRIBEIMAGEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeImageAttributeRequestPrivate;

class QTAWSEC2_EXPORT DescribeImageAttributeRequest : public Ec2Request {

public:
    DescribeImageAttributeRequest(const DescribeImageAttributeRequest &other);
    DescribeImageAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
