// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMMETRICREQUEST_H
#define QTAWS_DESCRIBECUSTOMMETRICREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeCustomMetricRequestPrivate;

class QTAWSIOT_EXPORT DescribeCustomMetricRequest : public IoTRequest {

public:
    DescribeCustomMetricRequest(const DescribeCustomMetricRequest &other);
    DescribeCustomMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
