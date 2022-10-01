// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICWIDGETIMAGEREQUEST_H
#define QTAWS_GETMETRICWIDGETIMAGEREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricWidgetImageRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricWidgetImageRequest : public CloudWatchRequest {

public:
    GetMetricWidgetImageRequest(const GetMetricWidgetImageRequest &other);
    GetMetricWidgetImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricWidgetImageRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
