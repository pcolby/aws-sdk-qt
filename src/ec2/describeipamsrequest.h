// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSREQUEST_H
#define QTAWS_DESCRIBEIPAMSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamsRequestPrivate;

class QTAWSEC2_EXPORT DescribeIpamsRequest : public Ec2Request {

public:
    DescribeIpamsRequest(const DescribeIpamsRequest &other);
    DescribeIpamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpamsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
