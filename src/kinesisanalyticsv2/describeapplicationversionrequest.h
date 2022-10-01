// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationVersionRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DescribeApplicationVersionRequest : public KinesisAnalyticsV2Request {

public:
    DescribeApplicationVersionRequest(const DescribeApplicationVersionRequest &other);
    DescribeApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationVersionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
