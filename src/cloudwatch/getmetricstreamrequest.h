// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTREAMREQUEST_H
#define QTAWS_GETMETRICSTREAMREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStreamRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricStreamRequest : public CloudWatchRequest {

public:
    GetMetricStreamRequest(const GetMetricStreamRequest &other);
    GetMetricStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
