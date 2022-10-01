// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_H
#define QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeLoggingOptionsRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DescribeLoggingOptionsRequest : public IoTAnalyticsRequest {

public:
    DescribeLoggingOptionsRequest(const DescribeLoggingOptionsRequest &other);
    DescribeLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingOptionsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
