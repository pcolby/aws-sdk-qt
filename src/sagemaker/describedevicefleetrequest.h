// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEFLEETREQUEST_H
#define QTAWS_DESCRIBEDEVICEFLEETREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDeviceFleetRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeDeviceFleetRequest : public SageMakerRequest {

public:
    DescribeDeviceFleetRequest(const DescribeDeviceFleetRequest &other);
    DescribeDeviceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
