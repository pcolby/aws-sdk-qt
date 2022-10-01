// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTWINDOWSREQUEST_H
#define QTAWS_DESCRIBEINSTANCEEVENTWINDOWSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventWindowsRequestPrivate;

class QTAWSEC2_EXPORT DescribeInstanceEventWindowsRequest : public Ec2Request {

public:
    DescribeInstanceEventWindowsRequest(const DescribeInstanceEventWindowsRequest &other);
    DescribeInstanceEventWindowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceEventWindowsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
