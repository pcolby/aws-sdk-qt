// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCSREQUEST_H
#define QTAWS_DESCRIBEVPCSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcsRequestPrivate;

class QTAWSEC2_EXPORT DescribeVpcsRequest : public Ec2Request {

public:
    DescribeVpcsRequest(const DescribeVpcsRequest &other);
    DescribeVpcsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
