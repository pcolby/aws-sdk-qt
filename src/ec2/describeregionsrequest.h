// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSREQUEST_H
#define QTAWS_DESCRIBEREGIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeRegionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeRegionsRequest : public Ec2Request {

public:
    DescribeRegionsRequest(const DescribeRegionsRequest &other);
    DescribeRegionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
