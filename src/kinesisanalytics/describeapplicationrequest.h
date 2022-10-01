// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DescribeApplicationRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT DescribeApplicationRequest : public KinesisAnalyticsRequest {

public:
    DescribeApplicationRequest(const DescribeApplicationRequest &other);
    DescribeApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
