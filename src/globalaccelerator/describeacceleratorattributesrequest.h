// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEACCELERATORATTRIBUTESREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorAttributesRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeAcceleratorAttributesRequest : public GlobalAcceleratorRequest {

public:
    DescribeAcceleratorAttributesRequest(const DescribeAcceleratorAttributesRequest &other);
    DescribeAcceleratorAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
