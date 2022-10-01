// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTGROUPREQUEST_H
#define QTAWS_DESCRIBEENDPOINTGROUPREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeEndpointGroupRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeEndpointGroupRequest : public GlobalAcceleratorRequest {

public:
    DescribeEndpointGroupRequest(const DescribeEndpointGroupRequest &other);
    DescribeEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
