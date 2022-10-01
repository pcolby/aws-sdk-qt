// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorAttributesRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingAcceleratorAttributesRequest : public GlobalAcceleratorRequest {

public:
    DescribeCustomRoutingAcceleratorAttributesRequest(const DescribeCustomRoutingAcceleratorAttributesRequest &other);
    DescribeCustomRoutingAcceleratorAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
