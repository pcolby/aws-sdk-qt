// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYIDFORMATREQUEST_H
#define QTAWS_DESCRIBEIDENTITYIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdentityIdFormatRequestPrivate;

class QTAWSEC2_EXPORT DescribeIdentityIdFormatRequest : public Ec2Request {

public:
    DescribeIdentityIdFormatRequest(const DescribeIdentityIdFormatRequest &other);
    DescribeIdentityIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
