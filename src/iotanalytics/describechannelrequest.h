// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_H
#define QTAWS_DESCRIBECHANNELREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeChannelRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DescribeChannelRequest : public IoTAnalyticsRequest {

public:
    DescribeChannelRequest(const DescribeChannelRequest &other);
    DescribeChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
