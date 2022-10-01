// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORREQUEST_H
#define QTAWS_DESCRIBEACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    DescribeAcceleratorRequest(const DescribeAcceleratorRequest &other);
    DescribeAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
