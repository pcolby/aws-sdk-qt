// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBEEVENTCONFIGURATIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeEventConfigurationsRequestPrivate;

class QTAWSIOT_EXPORT DescribeEventConfigurationsRequest : public IoTRequest {

public:
    DescribeEventConfigurationsRequest(const DescribeEventConfigurationsRequest &other);
    DescribeEventConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventConfigurationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
