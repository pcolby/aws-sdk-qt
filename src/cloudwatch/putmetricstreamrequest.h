// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICSTREAMREQUEST_H
#define QTAWS_PUTMETRICSTREAMREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricStreamRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutMetricStreamRequest : public CloudWatchRequest {

public:
    PutMetricStreamRequest(const PutMetricStreamRequest &other);
    PutMetricStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricStreamRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
