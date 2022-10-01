// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETSREQUEST_H
#define QTAWS_DESCRIBESUBNETSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSubnetsRequestPrivate;

class QTAWSEC2_EXPORT DescribeSubnetsRequest : public Ec2Request {

public:
    DescribeSubnetsRequest(const DescribeSubnetsRequest &other);
    DescribeSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubnetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
